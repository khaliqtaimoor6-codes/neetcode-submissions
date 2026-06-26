class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // last valid element of nums1
        int j = n - 1;      // last element of nums2
        int k = m + n - 1;  // last position in nums1
        
        // Merge while both arrays have elements left
        while (i >= 0 && j >= 0) {
            if (nums2[j] > nums1[i]) {
                nums1[k] = nums2[j];
                j--;
            } else {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }
        
        // If nums2 still has elements left, copy them
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        
        // If nums1 still has elements left, they're already in place
        // No need to do anything!
    }
};


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int i=m-1;//last valid element of nums1
//        int k=m+n-1;//points at end of nums1
//        int j=n-1;//points at end of nums2

//     //Consider:
// //nums1 = [1, 3, 5, 0, 0, 0]  (m=3, n=3)
// //nums2 = [2, 4, 6]
// //i points to 5
// //k points to last element 0, index 5
// //j points to 6

// //step 1: nums1=[1,3,5,0,0,6],num2=[2,4,6]
// //i points to 5, index 2
// //k points to second last element index 4,5>4, 5 goes to nums[k]
// //j points to 4, index 1

// //step 2: nums1=[1,3,5,0,5,6],nums2=[2,4,6]
// //i points to 1, index 1
// //k points to third last element , index 3
// //j points to 4, index 1

// //nums1=[1,3,5,4,5,6],nums2=[2,4,6]
// //after computation
// //i points at 3 index 1
// //j points at 2 index 0
// //k points at 5 index 2


// //3>2 or nums1[i]>nums2[j]
// //nums[2]=3
// ////nums1=[1,3,3,4,5,6],nums2=[2,4,6]
// //i points at 1 index 0
// //j points at 2 index 0
// // k points at 3 index 1

// //nums2[j]>nums1[i] or 2 > 1
// //nums1[1]=2
// //nums1=[1,2,3,4,5,6],nums2=[2,4,6]
// //i= 0
// //j = -1
// //k points at index 0


//         while(j!=-1 || i!=-1)
//         {
//             if(nums2[j]>nums1[i])
//             {
//                 nums1[k]=nums2[j];
//                 j--;               
//                 k--;
//             }
//             if(nums2[j]<nums1[i])
//             {
//                 nums1[k]=nums1[i];
//                 i--;
//                 k--;
//             }
//         }


//     }
// };

//  // int front=0;//for nums1 iteration
//         // int last=nums.size()-1;

//         // int n2=0;//for nums 2 iteration

//         // while(front!=last)//we put elements in the nums1 array
//         // {
//         //     if(nums1[front]==0)
//         //     {
//         //         nums1[front]=nums2[n2];
//         //         n2++;
//         //     }
//         //     front++;
//         // }
//         //we can use now hashmap to sort and make complexity N separately
//         //because its not nested loop it wont be N^2 rather just N
