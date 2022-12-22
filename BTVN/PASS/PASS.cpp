#include <bits/stdc++.h>
#define bignum string
using namespace std;
bignum s;
int main()
{
    //freopen("PASS.INP","r",stdin);
    //freopen("PASS.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    long long tong=0;
    for(int i=0;i<s.size();i++)
    {
        tong=tong+(s[i]-48);
    }
    cout<<tong;
}