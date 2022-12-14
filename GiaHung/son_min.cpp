#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("son_min.inp","r",stdin);
    freopen("son_min.out","w",stdout);
    int n,so,somin;
    cin>>n;
    cin>>so;
    somin=so;
    for(int i=2;i<=n;i++)
    {
        cin>>so;
        if(so<somin) somin=so;
    }
    cout<<somin;
    return 0;
}

