class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        
        int maxA=0;
       int currArea=0;

        while(left<=right)
        {
             int width=right-left;
             int minHeight=min(heights[left],heights[right]);
             currArea=width*minHeight;
             maxA=max(currArea,maxA);
            if(heights[right]>heights[left])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
       
        return maxA;
    }
};
