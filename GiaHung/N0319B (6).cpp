#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("N0319B.inp","r",stdin);
    freopen("N0319B.out","w",stdout);
    int n,tien=2000,tong=2000;
    cin>>n;
    for(int i=2;i<=n;i++){
        tien=tien+1000;
        tong=tong+tien;
    }
    cout<<tong;
    return 0;
}
