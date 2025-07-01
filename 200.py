from typing import List


def dfs(grid, i, j):
    stack = []
    stack.append((i,j))
    move = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    while(len(stack)):
        row ,col = stack.pop()
        for k, l in move:
            i,j = row+k, col+l
            if (i >= 0 and j >= 0 and i < len(grid) and j < len(grid[0]) and grid[i][j] == '1'):
                grid[i][j] = -1
                stack.append((i,j))


def numIslands(grid: List[List[str]]) -> int:
    n = len(grid[0])
    m = len(grid)
    ans = 0
    for i in range(m):
        for j in range(n):
            if grid[i][j] == '1':
                dfs(grid, i, j)
                ans += 1
    return ans


if __name__ == "__main__":
    grid = [
        ["1", "1", "0", "0", "0"],
        ["1", "1", "0", "0", "0"],
        ["0", "0", "1", "0", "0"],
        ["0", "0", "0", "1", "1"]]
    print(numIslands(grid))