from typing import List


def longestConsecutive(nums: List[int]) -> int:
    hash = set(nums)
    ans  = 0
    for i in hash:
        if i-1 not in hash:
            x = i + 1
            while x in hash:
                x+=1
            ans = max(ans, x-i)
    return ans
    
if __name__ == "__main__":
    print(longestConsecutive([0, 3, 7, 2, 5, 8, 4, 6, 0, 1]))
