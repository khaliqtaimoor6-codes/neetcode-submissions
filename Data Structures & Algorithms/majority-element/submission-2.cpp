class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=0;
        int totalsize=nums.size();
        sort(nums.begin(),nums.end());
        int val=nums[totalsize/2];
        return val;
    }
};