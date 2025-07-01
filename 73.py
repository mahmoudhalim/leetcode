from typing import List


def setZeroes(matrix: List[List[int]]) -> None:
    n = len(matrix[0])
    m = len(matrix)
    zcol, zrow = 0,0
    for i in range(m):
        for j in range(n):
            if matrix[i][j] == 0:
                if i==0:
                    zrow = 1
                if j ==0:
                    zcol = 1
                matrix[i][0] = matrix[0][j] = 0
                
    for i in range(1, m):
        for j in range(1, n):
            if not matrix[i][0] or not matrix[0][j]:
                matrix[i][j] = 0
                
    if zrow:
        for i in range(n):
            matrix[0][i] = 0
    
    if zcol:
        for i in range(m):
            matrix[i][0] = 0

if __name__ == "__main__":
    a = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]
    setZeroes(a)
    print(a)