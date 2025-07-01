from typing import List


def summaryRanges(nums: List[int]) -> List[str]:
    if not nums:
        return []
    first, last = nums[0], None
    ans: List[str] = []
    for i in range(len(nums) - 1):
        if nums[i] == nums[i+1] - 1:
            last = nums[i+1]
        else:
            s = str(first) + "->" + str(last) if last!=None else str(first)
            ans.append(s)
            first = nums[i+1]
            last = None


    s = str(first) + "->" + str(last) if last!= None  else str(first)
    ans.append(s)
    return ans

if __name__ == "__main__":
    print(summaryRanges([-2, -1, 1, 2, 2147483646, 2147483647]))
