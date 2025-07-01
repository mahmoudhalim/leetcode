from typing import List


def groupAnagrams(strs: List[str]) -> List[List[str]]:
    hashMap = {}
    for word in strs:
        s = "".join(sorted(word))
        if s in hashMap:
            hashMap[s].append(word)
        else:
            hashMap[s] = [word]
    ans = []
    for i in hashMap:
        ans.append(hashMap[i])
    return ans


if __name__ == "__main__":
    strs = ["eat", "tea","tan","ate","nat","bat"]
    print(groupAnagrams(strs))