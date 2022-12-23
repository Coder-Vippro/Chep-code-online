#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TOA_DO.inp","r",stdin);
    freopen("TOA_DO.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a>0&&b>0) cout<<"I";
    else if(a<0&&b>0) cout<<"II";
    else if(a<0&&b<0) cout<<"III";
    else cout<<"IV";
}
