#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("hoadon.inp","r",stdin);
    freopen("hoadon.out","w",stdout);
    int a;
    cin>>a;
    if(a<50) cout<<a*1000;
    else if(a<100) cout<<50*1000+(a-50)*1500;
    else if(a<200) cout<<50*1000+50*1500+(a-100)*2000;
    else cout<<50*1000+50*1500+100*2000+(a-200)*2500;
    return 0;
}
