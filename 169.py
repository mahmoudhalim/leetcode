from typing import List


def majorityElement(nums: List[int]) -> int:
    majority = nums[0]
    count = 1
    for i in range(1, len(nums)):
        if count > 0:
            if nums[i] == majority:
                count += 1
            else:
                count -= 1
        else:
            majority = nums[i]
            count = 1
    return majority


if __name__ == "__main__":
    print(majorityElement([6,5,5]))