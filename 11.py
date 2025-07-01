from typing import List


def maxArea(height: List[int]) -> int:
    left = 0
    right = len(height) - 1
    ans = -1
    while left < right:
        area = min(height[left], height[right]) * abs(right - left)
        ans = max(ans, area)
        if (height[left]<= height[right]):
            left += 1
        else:
            right -=1
    
    return ans

if __name__ == "__main__":
    a = [1,1]
    print(maxArea(a))