class Solution392 {
    public static boolean isSubsequence(String s, String t) {
        int l = 0, r = 0;
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        if (s.length() == 0)
            return true;
        while (r < t.length() && l<s.length()) {
            if (sArr[l] == tArr[r]) {
                l++;
            }
            r++;
        }
        return l == s.length();
    }
    public static void main(String[] args) {
        String s = "axc", t = "ahbgdc";
        System.out.println(isSubsequence(s, t));
    }
}