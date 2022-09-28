#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    long long n;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        s[i]=char(s[i]-n);
    }
    cout<<s;
    return 0;
}
