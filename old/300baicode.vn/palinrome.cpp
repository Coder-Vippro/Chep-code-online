class Solution {
public:
    bool isPalindrome(string s) 
    {
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=65 && s[i]<=90))
            {
                s[i]=s[i]+32;
            }
            else if(s[i]<=65 || (s[i]>=90 && s[i]<96) || s[i]>123)
            {
                s.erase(i);
            }
            else s.erase(i);
            
        }  
        string s2=s;
        reverse(s.begin(),s.end());
        if(s2==s)return true;
        return false;
    }
};