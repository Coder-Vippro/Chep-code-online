#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TONG.inp","r",stdin);
    freopen("TONG.out","w",stdout);
    int n,s = 0;
    cin>>n;
    for (int i=0;i<=n;i++){
                s=s+i*i*i;
    }
    cout <<s;

    return 0;
}
