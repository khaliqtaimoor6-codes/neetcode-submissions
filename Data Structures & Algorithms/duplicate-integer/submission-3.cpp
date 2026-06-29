class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
     {
        sort(nums.begin(),nums.end());
        if(nums.empty())
        {
            return false;
        }
       for(int i=0;i<nums.size()-1;i++)
       {
        if(nums[i]==nums[i+1])
        {
            return true;
        }
       }
       return false;
     }

};

 // bool hasDuplicate(vector<int>& nums) 
    // {
    //     unordered_map<int,int> freq;
    //     for(int i=0;i<nums.size()-1;i++)//takes everthing to map
    //     {
    //         freq[i]=nums[i];
    //     }
    //     for(int i=0;i<nums.size()-1;i++)
    //     {

    //         if(freq.find(freq[i])==freq.end())
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }


//     //This was for sorted arrays
    //     //1 2 3 3
    //    int first=0;
    //    int second=1;

    //    for(int i=0;i<nums.size()-1;i++)
    //    {
    //     if(nums[first]==nums[second])
    //     {
    //         return true;
    //     }
    //     first++;
    //     second++;
    //    }
    //    return false;