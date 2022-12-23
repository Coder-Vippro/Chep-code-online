#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TONGS.inp","r",stdin);
    freopen("TONGS.out","w",stdout);
    int n,s = 0,a;
    cin>>n;
    for (int i=0;i<=n;i++){
                 a=i+2;
                s=s+i*a;
    }
    cout <<s;

    return 0;
}
