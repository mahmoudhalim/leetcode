def longestPalindrome(s: str) -> str:
    n = len(s)
    dp = [[False] * n for _ in range(n)]
    ans = [0,0]
    a = list()

    for i in range(n):
        dp [i][i] = True
        
    for i in range(n-1):
        if s[i] == s[i+1]:
            dp[i][i+1] = True
            ans = [i, i+1]
            
    for d in range(2, n):
        for i in range(n - d):
            if dp[i+1][i+d-1] == True and s[i] == s[i+d]:
                dp [i][i+d] = True
                ans = [i, i+d]
                
    i, j = ans
    return s[i:j+1]


if __name__ == "__main__":
    print(longestPalindrome("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"))
    s = "abcba"
    print(s[0:len(s)-1])


