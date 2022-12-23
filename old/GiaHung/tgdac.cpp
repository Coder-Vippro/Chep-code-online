#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tgdac.inp","r",stdin);
    freopen("tgdac.out","w",stdout);
    int n;
    cin>>n;
    for(int d=1;d<=n;d++)
    {
        for(int i=1;i<=d;i++)cout<<"* ";
        cout<<" "<<endl;
    }
    return 0;
}
