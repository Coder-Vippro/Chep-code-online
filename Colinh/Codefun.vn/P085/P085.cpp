#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k=s.size()-1;
    long long so=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            so=so+1*pow(2,k);
        }
        if(s[i]=='0')
        {
            so=so+0*pow(2,k);
        }
        k--;
    }
    cout<<so;

}