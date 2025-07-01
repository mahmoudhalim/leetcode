#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
  static bool isValidSudoku(vector<vector<char>> &board) {
    unordered_set<char> r;
    for (int i = 0; i < 9; i++) {

      for (int j = 0; j < 9; j++) {
        if (board[i][j] != '.') {
          if (r.count(board[i][j]) == 0) {
            r.insert(board[i][j]);
          } else {
            return false;
          }
        }
      }
      r.erase(r.begin(), r.end());
    }
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        if (board[j][i] != '.') {
          if (r.count(board[j][i]) == 0) {
            r.insert(board[j][i]);
          } else {
            return false;
          }
        }
      }
      r.erase(r.begin(), r.end());
    }
    for (int l = 0; l < 3; l++) {
      for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            if (board[i + 3 * l][j + 3 * k] != '.') {
              if (r.count(board[i + 3 * l][j + 3 * k]) == 0) {
                r.insert(board[i + 3 * l][j + 3 * k]);
              } else {
                return false;
              }
            }
          }
        }
        r.erase(r.begin(), r.end());
      }
    }
    return true;
  }
};

int main() {
  vector<vector<char>> board = {{'.', '.', '.', '.', '5', '.', '.', '1', '.'},
                                {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
                                {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
                                {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
                                {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
                                {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
                                {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
                                {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
                                {'.', '.', '4', '.', '.', '.', '.', '.', '.'}};
  cout << Solution::isValidSudoku(board) << '\n';
}