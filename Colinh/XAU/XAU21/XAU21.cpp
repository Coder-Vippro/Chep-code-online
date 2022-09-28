#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
        for(int j=s.size()-1;j>=0;j--)
        {
            if(s[i]==s[j])
                s.erase(j);
        }
        cout<<s;
    return 0;
}
