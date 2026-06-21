class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
       unordered_map<int,int> map;//value->index,,hashmap stl

       for(int i=0;i<nums.size();i++)
       {
        int need = target-nums[i];

        if(map.count(need))//whether we have seen the need element before
        {
            return {map[need],i};//now we have seen it
        }
        map[nums[i]]=i;
       }
return{};
    }
};
