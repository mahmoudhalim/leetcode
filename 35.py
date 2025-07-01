from typing import List


def searchInsert(nums: List[int], target: int) -> int:
    low, high = 0, len(nums) - 1 
    while low <= high:
        mid = low + (high - low) // 2
        if target == nums[mid]:
            return mid
        if target > nums[mid]:
            low = mid + 1
        else:
            high = mid - 1
    return low


if __name__ == "__main__":
    print(searchInsert([1, 3,5,6], 7))