#include <bits/stdc++.h>
using namespace std;
int dem=0;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A' || s[i]=='a' )
        {
            dem++;
        }
    }
    cout<<dem;
}