from typing import List


def minSubArrayLen(target: int, nums: List[int]) -> int:
    left,right = 0,0
    ans = 10e5 + 7
    s = 0
    while right < len(nums):
        s += nums[right]
        while s >= target:
            s -= nums[left]
            ans = min(ans, right - left + 1)
            left += 1
        right +=1
    return ans if ans != 10e5 +7 else 0
    
if __name__ == "__main__":
    a = [1, 1, 1, 1, 1, 1, 1, 1]
    print(minSubArrayLen(11, a))
