class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.empty())
            return 0;

        int first = 0;
        int last = 0;
        int k = 1;

        while(last < nums.size() - 1)
        {
            if(nums[first] != nums[last + 1])//we keep first to the position where next element is going to be added and we dont  
            {//keep adding it like we do the last ..basically last is to scan next element coming
                nums[first + 1] = nums[last + 1];

                first++;
                k++;
            }

            last++;
        }

        return k;
    }
};
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int first=0;
//         int last=0;
//         int k=1;
//         while(last!=nums.size())
//         {
//             if(nums[first]!=nums[last+1])//checked in accordance if there is no duplicate
//             {
//                 last++;
//                 k++;
//             }
//             else//if the next element is a duplicate, we need to smth about it
//             {
//                 int temp=nums[last+1];
//                 nums[last+1]=nums[last+2];
//                 nums[last+2]=temp;
                
//             }
//         }
//         return k;

//     }
// };