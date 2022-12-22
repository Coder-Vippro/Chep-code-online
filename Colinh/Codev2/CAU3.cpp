#include <bits/stdc++.h>
using namespace std;
int dem=0;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            dem++;
        }
    }
    cout<<dem;
}