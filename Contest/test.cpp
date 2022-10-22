#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
        {
            if((s[i]>=65 && s[i]<=90))
            {
                s[i]=s[i]+32;
            }
            else if(s[i]<0||(s[i]>=90 && s[i]<=96) || s[i]>123)
            {
                s.erase(i);
            }
        }  
        string s2=s;
        reverse(s.begin(),s.end());
        if(s==s2)cout<<1;
        else cout<<0;
        cout<<s;
        cout<<s2;
}