class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int count=0;
        string result="";
        while(count !=word1.size() && count !=word2.size() )
        {
            result+=word1[count];
            result+=word2[count];
            count++;
           
        }
         if(count==word1.size() && count != word2.size())
            {
                result.append(word2,count,word2.length()-count);
            }
              if(count!=word1.size() && count == word2.size())
            {
                 result.append(word1,count,word1.length()-count);
            }
        return result;

    }
};