#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tgvu.inp","r",stdin);
    freopen("tgvu.out","w",stdout);
    int d,c,n;
    cin>>n;
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n+1-d;c++) cout<<"*";
        cout<<endl;
    }
    return 0;
 }
