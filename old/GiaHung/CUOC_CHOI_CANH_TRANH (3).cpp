#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CUOC_CHOI_CANH_TRANH.inp","r",stdin);
    freopen("CUOC_CHOI_CANH_TRANH.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(c==0) b++;
    else if(c==1) a++;
    if(a>b) cout<<"Trang";
    else cout<<"Huong";
    return 0;
}
