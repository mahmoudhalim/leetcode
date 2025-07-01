from typing import List


def removeDuplicates(nums: List[int]) -> int:
    found = 1
    is_twice = False
    last = nums[0]
    for i in range(1, len(nums)):
        if nums[i] == last:
            if not is_twice:
                is_twice = True
                nums[found] = nums[i]
                found+=1
                continue
        else:
            is_twice = False
            nums[found] = nums[i]
            found+=1
            last = nums[i]
    return found

if __name__=="__main__":
    a = [0, 0, 1, 1, 1, 1, 2, 3, 3]
    print(removeDuplicates(a), a)
