from typing import List


def threeSum(nums: List[int]) -> List[List[int]]:
    nums = sorted(nums)
    n= len(nums)
    ans = set()
    for i in range(n):
        if nums[i] > 0:
            break
        if i != 0 and nums[i] == [i - 1]:
            continue
        low = i + 1
        high = n - 1
        while low < high:
            s = nums[i] + nums[low] + nums[high]
            if s < 0:
                low +=1
            elif s > 0:
                high -= 1
            else:
                ans.add((nums[i], nums[low], nums[high]))
                lastLow = nums[low]
                lastHigh = nums[high]
                while low < high and nums[low] == lastLow:
                    low += 1
                while low < high and nums[high] == lastHigh:
                    high -= 1
    return list(ans)

if __name__ == "__main__":
    print(threeSum([-1, 0,1,2,-1,-4]))