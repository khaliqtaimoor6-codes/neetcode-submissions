class Solution {
public:
    void reverseString(vector<char>& s) {
        int front=0;
        int last=s.size()-1;

        while(front<=last)
        {
            int temp=s[front];
            s[front]=s[last];
            s[last]=temp;
            front++;
            last--;
        }

    }
};