class Solution {
public:
    bool halvesAreAlike(string s) {
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i <= s.size() / 2 - 1) {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                    s[i] == 'O' || s[i] == 'U')
                    a++;
            }
            if (i > s.size() / 2 - 1) {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                    s[i] == 'O' || s[i] == 'U')
                    b++;
            }
        }
        if (a == b) {
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna