import java.util.Arrays;

class Solution167 {
    public static int[] twoSum(int[] numbers, int target) {
        int l = 0, r = numbers.length - 1;
        int s = 0;
        while (l < r) {
            s = numbers[l] + numbers[r];
            if (s == target)
                break;
            else if (s < target)
                l++;
            else
                r--;
        }
        return new int[] { ++l, ++r };
    }
    public static void main(String[] args) {
        int[] arr = { -1, 0};
        int target = -1;
        System.out.println(Arrays.toString(twoSum(arr, target)));
    };
}