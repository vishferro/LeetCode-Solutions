class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string v;
        int i = 0, j = 0;

        while (i < word1.size() || j < word2.size()) {

            if (i < word1.size()) {
                v.push_back(word1[i]);
                i++;
            }
            if (j < word2.size()) {
                v.push_back(word2[j]);
                j++;
            }
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna