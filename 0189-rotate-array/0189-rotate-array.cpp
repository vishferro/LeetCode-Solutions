class Solution {
public:
    void reverse(vector<int>& arr , int i,int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    } 
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr ,k,n-1);

        
    }
   
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna