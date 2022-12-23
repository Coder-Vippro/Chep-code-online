#include <bits/stdc++.h>
using namespace std;
bool kt(string s)
{
    for(long long i=s.size()-1;i>=0;i--)
        {
            if(s[i]<s[i-1])
            return false;
        }
        return true;
}
int main()
{
    string s;
    int n;
    cin>>n;
    int dem=0;
    while(n--)
    {
        cin>>s;
        if(kt(s)==true)
        dem++;
    }
    cout<<dem;
}