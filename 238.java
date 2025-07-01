import java.util.*;

class Solution238 {
    public static int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] pre = new int[n];
        pre[0] = 1;
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] * nums[i-1];
        }
        int suf = 1;
        for (int i = n - 1; i >= 0; i--) {
            pre[i] *= suf;
            suf *= nums[i];
        }

        return pre;
    }
    public static void main(String[] args) {
        int[] arr = { -1,1,0,-3,3 };
        System.out.println(Arrays.toString(productExceptSelf(arr)));
    }
}

/*
 * arr = 1 2 3 4
 * pre = 1 2 6 24
 * suf = 24 24 12 4
 * ans = 24 12 8 6
 */