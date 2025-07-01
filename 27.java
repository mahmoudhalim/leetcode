class Solution27 {
    public static int removeElement(int[] nums, int val) {
        int i = 0, j = 0;
        while (i < nums.length) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        return j;
    }
    
    public static void main(String[] args) {
        int arr[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
        System.out.println(removeElement(arr, 2));
    }
}