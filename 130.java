import java.util.*;

class Solution130 {
    private int m;
    private int n;

    public void solve(char[][] board) {
        m = board.length;
        n = board[0].length;
        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O') {
                dfs(board, i, 0);
            }
            if (board[i][n-1] == 'O') {
                dfs(board, i, n-1);
            }
        }
        for (int j = 0; j < n; j++) {
            if (board[0][j] == 'O') {
                dfs(board, 0, j);
            }
            if (board[m-1][j] == 'O') {
                dfs(board, m-1, j);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }

                else if (board[i][j] == '#') {
                    board[i][j] = 'O';
                }
            }
        }
        

    }

    private void dfs(char[][] board, int i, int j) {
        Stack<int[]> stack = new Stack<>();
        stack.add(new int[] { i, j });
        int[] xMove = { 1, -1, 0, 0, 0 };
        int[] yMove = { 0, 0, 1, -1, 0 };
        while (!stack.isEmpty()) {
            int[] c = stack.pop();
            int row = c[0], col = c[1];
            for (int k = 0; k < 5; k++) {
                i = row + xMove[k];
                j = col + yMove[k];
                if (isValid(i, j) && board[i][j] == 'O') {
                    board[i][j] = '#';
                    stack.add(new int[] { i, j });
                }
            }

        }
    }

    private boolean isValid(int i, int j) {
        return i >= 0 && i < m  && j >= 0 && j < n ;
    }

    public static void main(String[] args) {
        // char[][] array = {
        //         { 'X', 'X', 'X', 'X' },
        //         { 'X', 'O', 'O', 'X' },
        //         { 'X', 'X', 'O', 'X' },
        //         { 'X', 'O', 'X', 'X' }
        // };
        // char[][] array = {
        //     {'O', 'O'},
        //     {'O', 'O'}
        // };
        // char[][] array = {
        //         { 'X', 'X', 'X' },
        //         { 'X', 'O', 'X' },
        //         { 'X', 'X', 'X' }
        // };
        char[][] array = {
                { 'X', 'O', 'X', 'O', 'X', 'O' },
                { 'O', 'X', 'O', 'X', 'O', 'X' },
                { 'X', 'O', 'X', 'O', 'X', 'O' },
                { 'O', 'X', 'O', 'X', 'O', 'X' }
        };
        Solution130 s = new Solution130();
        s.solve(array);
        for (int i = 0; i < array.length; i++) {
            System.out.println(Arrays.toString(array[i]));
        }

    }
}