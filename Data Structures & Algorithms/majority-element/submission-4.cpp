class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int totalsize=nums.size();
        sort(nums.begin(),nums.end());
        int val=nums[totalsize/2];
        return val;
    }
};

/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int val = nums[0];
        int majority = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == val) {
                majority++;
            } else {
                val = nums[i];
                majority = 1;
            }

            if (majority > nums.size() / 2) {
                return val;
            }
        }

        return val;
    }
};*/