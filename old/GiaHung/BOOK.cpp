#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BOOK.inp","r",stdin);
   freopen("BOOK.out","w",stdout);
    int n,so[100000],s=0;
    cin>>n;
    for (int i=0;i<n;i++)cin>>so[i];
    sort(so,so+n,greater<int>());
    for (int i=0;i<n;i++)if((i+1)%3!=0)s=s+so[i];
    cout<<s;
    return 0;
}
