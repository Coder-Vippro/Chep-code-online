#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("demle.inp","r",stdin);
    freopen("demle.out","w",stdout);
    long long l,r,s=0;
    cin>>l>>r;
    l>0;
    r>0;
    l<=r;
    for(int n=l;n<=r;n++)
        if(n%2!=0) s++;
    cout<<s;
    return 0;
}
