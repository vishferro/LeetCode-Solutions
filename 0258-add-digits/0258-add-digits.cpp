class Solution {
public:
    int addDigits(int num) {
        int digit = 0, sum = 0;
        while(num>0){
            digit += num%10;
            num /=10;
        }
        while(digit>=10){
            sum = 0;
            while(digit>0){
                sum +=digit%10;
                digit /=10;
            }
            digit = sum;
        }
        return digit;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna