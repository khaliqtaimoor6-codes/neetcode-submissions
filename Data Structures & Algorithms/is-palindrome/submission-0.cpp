class Solution {
public:
    bool isPalindrome(string s) {
        int front=0;
        int last=s.length()-1;
        while(front<last)
        {
            if(!isalnum(s[front]))
            {
                front++;
                continue;
                
            }
            if(!isalnum(s[last]))
            {
                last--;
                continue;
            }
            if(tolower(s[front])!=tolower(s[last]))
            {
                return false;
            }
            front++;
            last--;
        }
        return true;
    }
};
