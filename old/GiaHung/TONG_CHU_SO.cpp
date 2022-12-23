#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TONG_CHU_SO.inp","r",stdin);
    freopen("TONG_CHU_SO.out","w",stdout);
    long long a,s=0;
    cin>>a;
    while(a>0){
     s=s+a%10;
    a/=10;
    }
    cout<<s;
    return 0;
}
