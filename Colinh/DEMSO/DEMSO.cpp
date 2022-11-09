#include <bits/stdc++.h>

using namespace std;
int x;
int n;
int dem=0;
int main()
{
    freopen("DEMSO.INP","r",stdin);
    freopen("DEMSO.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%3==0 && x%9!=0)
            dem++;
    }
    cout<<dem;
    return 0;
}
