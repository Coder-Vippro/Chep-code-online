#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DAU_GOI_DAU2.inp","r",stdin);
    freopen("DAU_GOI_DAU2.out","w",stdout);
    long long a,b,c,d,n;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a>>b>>c>>d;
    a=a%(b+c+d);
    if(b>a)cout<<'F';
    else if(b+c>a)cout<<'M';
    else cout<<'T';
    cout<<'\n';
    }
    return 0;
}
