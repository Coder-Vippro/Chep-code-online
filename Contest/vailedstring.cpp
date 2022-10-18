/*class Solution {
public:
    bool isValid(string s) 
    {
        int dem=0;
        for(int i=1;i<s.size();i++) 
        {
            if((s[i-1]=='(' && s[i]==')')||(s[i-1]=='[' && s[i]==']')&&(s[i-1]=='{'&& s[i]=='}'))
                {
                    i=i+1;
                }
            else return false;    
        }
        return true;
        
    }
};*/
#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) 
    {
        int dem=0;
        for(int i=1;i<s.size();) 
        {
            if((s[i-1]=='(' && s[i]==')')||(s[i-1]=='[' && s[i]==']')&&(s[i-1]=='{'&& s[i]=='}') )
                {
                    i=i+0;
                }
            else return false;    
            i=i+2;
        }
        return true;
        
    }
int main()  
{
    string s;
    cin>>s;
    if(isValid(s)==true)cout<<"ok"<<endl;
    else if(isValid(s)==false)cout<<"error"<<endl;

}