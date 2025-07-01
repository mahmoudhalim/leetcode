def convert(s: str, numRows: int) -> str:

    n = len(s)
    ans = [[] for _ in range(numRows)]
    row = 0
    i = 0
    numD = numRows - 2 
    while i < n:
        if row >= numRows:
            for j in range(numD):
                ans[row - j - 2].append(s[i])
                i+=1
                if i >= n:
                     break
            row = 0
        else:
            ans[row].append(s[i])
            row +=1
            i+=1
        
    return ''.join(i for row in ans for i in row)

if __name__ == "__main__":
    print(convert("ABCDE", 4))
