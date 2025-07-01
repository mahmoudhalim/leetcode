def rle(s: str):
    en = ""
    i = 0
    while i < len(s):
        count = 1
        while i+1 < len(s) and s[i] == s[i+1]:
            count+=1
            i+=1
        en += str(count) + s[i]
        i+=1
    return en

def countAndSay(n: int) -> str:
    if n==1:
        return "1"
    s="1"
    for _ in range(2, n+1):
        s = rle(s)
    return s

if __name__ == "__main__":
    print(countAndSay(30))