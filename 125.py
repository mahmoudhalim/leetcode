def isPalindrome(s: str) -> bool:
    i,j = 0,len(s) - 1
    s = s.lower()
    while i < j:
        if not s[i].isalpha() and not s[i].isdigit():
            i+=1
            continue
        if not s[j].isalpha() and not s[j].isdigit():
            j -= 1
            continue
        if s[i] != s[j]:
            return False
        i += 1
        j -= 1
    return True 
        


if __name__ == "__main__":
    print(isPalindrome("A man, a plan, a canal: Panama"))

