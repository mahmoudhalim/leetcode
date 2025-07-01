class Solution121 {
    public static int maxProfit(int[] prices) {
        int cheap = Integer.MAX_VALUE;
        int profit = 0;
        for (int i = 0; i < prices.length; i++) {
            profit = Math.max(profit, prices[i] - cheap);
            cheap = Math.min(cheap, prices[i]);
        }
        return profit;
    }
     public static void main(String[] args) {
         int[] arr = { 7, 6, 4, 3, 1 };
         System.out.println(maxProfit(arr));
     }
}