#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("thoinen.inp","r",stdin);
    freopen("thoinen.out","w",stdout);
    long long n,a[100001],sl=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
        if(a[i]==a[i-1]) sl++;
    else
    {
        cout<<sl+1;
        return 0;
    }
    return 0;
}
