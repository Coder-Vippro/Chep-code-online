#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NUM.inp","r",stdin);
    freopen("NUM.out","w",stdout);
    int n,m,k;
    cin>>n>>m;
    k=n;
    while (k%m!=0){
        k++;
    }

    cout <<k;

    return 0;
}
