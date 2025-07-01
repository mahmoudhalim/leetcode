def simplifyPath(path: str) -> str:
    arr = path.split("/")
    stack = []
    for i in range(len(arr)):
        if arr[i] == '/' or arr[i]=='.' or arr[i] == '':
            continue
        elif arr[i] == '..':
            if stack:
                stack.pop()
        else:
            stack.append(arr[i])
    ans = ""
    for i in stack:
        ans += '/' + i
    return ans if len(ans) > 0 else '/'
            

if __name__ == "__main__":
    s = "/.../a/../b/c/../d/./"
    print(simplifyPath(s))