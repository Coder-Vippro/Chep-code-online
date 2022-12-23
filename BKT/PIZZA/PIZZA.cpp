#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PIZZA.INP","r",stdin);
    freopen("PIZZA.OUT","w",stdout);
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int kq=a*x+y*b;
    int gia;
    for(int k=2;k<=2*max(x,y);k=k+2)
    {
        gia=k*c+max(0,(x-k/2))*a+max(0,(y-k/2))*b;
        kq=min(kq,gia);
    }
    cout<<kq;
    
}