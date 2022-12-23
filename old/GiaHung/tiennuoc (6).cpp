#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tiennuoc.inp","r",stdin);
    freopen("tiennuoc.out","w",stdout);
    double n,tien;
    cin>>n;
    if(n>=1&&n<=5) tien=6500*n;
    else if(n<=15) tien=6500*5+(n-5)*7800;
    else if(n<=25) tien=6500*5+10*7800+(n-15)*9200;
    else tien=6500*5+10*7800+10*9200+(n-25)*10300;
    cout<<fixed<<setprecision(2);
    cout<<tien<<endl;
    cout<<tien*3/25<<endl;
    cout<<tien*28/25;
    return 0;
}
