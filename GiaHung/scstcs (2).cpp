#include <bits/stdc++.h>

using namespace std;

int main()
{   freopen("scstcs.inp","r",stdin);
    freopen("scstcs.out","w",stdout);
     int n,dem=0,luu;
    cin>>n;
    luu=n;
    while(n>0)
    {
        n/=10;
        dem++;
    }
    cout<<dem<<endl;
    int tong=0;
    while (luu!=0)
    {
        tong+= luu %10;
        luu/=10;
    }
    cout<<tong;
    return 0;
}
