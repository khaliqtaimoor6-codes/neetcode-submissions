class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n); // Create a result array of double the size
        
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];       // Place in the first half
            ans[i + n] = nums[i];   // Place in the second half
        }
        
        return ans;
    }
};