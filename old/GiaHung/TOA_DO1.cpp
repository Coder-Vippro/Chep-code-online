#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TOA_DO1.inp","r",stdin);
    freopen("TOA_DO1.out","w",stdout);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 || y1==y2)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
