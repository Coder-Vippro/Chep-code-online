#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("somin.inp","r",stdin);
    freopen("somin.out","w",stdout);
    int n,so,somin,a[10000];
    cin>>n;
    cin>>a[1];
    somin=a[1];
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<somin) somin=a[i];
    }
    cout<<somin<<endl;
    int dem=0;
    for(int i=1;i<=n;i++)
        if(a[i]==somin) dem++;
    cout<<dem;
    return 0;
}
