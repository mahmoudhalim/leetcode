from typing import List


def rotate(matrix: List[List[int]]) -> None:
    n = len(matrix)
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        
    for i in range(n):
        for j in range(n//2):
            matrix[i][j], matrix[i][n - j -1] = matrix[i][n - j - 1], matrix[i][j]
if __name__ == "__main__":
    m = [[1, 2,3],[4,5,6],[7,8,9]]
    rotate(m)
    print(m)