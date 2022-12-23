#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("mang2.inp","r",stdin);
    freopen("mang2.out","w",stdout);
    int a[10000],n,s=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]%2!=0) s++; cout<<s<<endl;
    return 0;
}
