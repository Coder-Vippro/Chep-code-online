#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CAP_DO.inp","r",stdin);
    freopen("CAP_DO.out","w",stdout);
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(c<3) cout<<"1";
    else if(c<=10) cout<<"2";
    else if(c<=60) cout<<"3";
    else cout<<"4";
    return 0;
}
