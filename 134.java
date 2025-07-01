import java.util.Arrays;

class Solution134 {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int sum = 0, ans = 0;
        // int[] arr = new int[cost.length];
        for (int i = 0; i < cost.length; i++) {
            arr[i] = gas[i] - cost[i];
            if (sum + gas[i] - cost[i] > gas[i] - cost[i]) {
                sum = sum + gas[i] - cost[i];
            } else
                sum = gas[i] - cost[i];
                ans = i;
        }
        
        // System.out.println(Arrays.toString(arr));
        return sum>=0?ans:-1;
    }

    public static void main(String[] args) {
        Solution134 s = new Solution134();
        int[] gas = { 1,2, 3, 4,5 }, cost = { 3, 4, 5,1,2 };
        System.out.println(s.canCompleteCircuit(gas, cost));
    }
}