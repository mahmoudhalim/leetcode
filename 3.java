import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

class Solution3 {
    public int lengthOfLongestSubstring(String s) {
        char[] str = s.toCharArray();
        Map<Character, Integer> m = new HashMap<>();
        int l = 0;
        int max = 0;
        for (int r = 0; r < str.length; r++) {
            if (!m.containsKey(str[r])) {
                m.put(str[r], r);
                max = Math.max(max, r - l + 1);
            } else {
                l = m.get(str[r]) + 1;
            }

        }
        return max;
    }


    public static void main(String[] args) {
        String s = "pwwkew";
        Solution3 sol = new Solution3();
               System.out.println(sol.lengthOfLongestSubstring(s));
    }
}