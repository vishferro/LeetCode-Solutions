class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int r = s.size() - 1;
        while (r >= 0) {
            if (s[r] != ' ') {
                count++;
            }
            if (count >= 1 && s[r] == ' ') {
                return count;
            }
            r--;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna