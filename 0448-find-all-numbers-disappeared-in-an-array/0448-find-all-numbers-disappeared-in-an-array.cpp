class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> v(n + 1, false);
        vector<int> d;       // d = disappeared Number


        for (int i = 0; i < nums.size(); i++) {
            v[nums[i]] = true;
        }
        for (int i = 0; i < v.size(); i++) {
            if (i != 0 && !v[i])
                d.push_back(i);
        }

        return d;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna