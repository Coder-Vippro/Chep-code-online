#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("minmax.inp","r",stdin);
    freopen("minmax.out","w",stdout);
    int n,somin,somax,so;
    cin>>n;
    cin>>so;
    somin=so;
    somax=so;
    for(int i=2;i<=n;i++)
    {
        cin>> so;
        if(so<somin) somin=so;
        if(so>somax) somax=so;
    }
    cout<<"SO LON NHAT: "<<somax<<endl;
    cout<<"SO BE NHAT: "<<somin;
    return 0;
}
