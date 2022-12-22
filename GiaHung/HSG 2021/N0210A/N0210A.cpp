#include <bits/stdc++.h>

using namespace std;
int a,b,c,d;
int main()
{
    freopen("N0210A.inp","r",stdin);
    freopen("N0210A.out","w",stdout);
    cin>>a>>b>>c>>d;
    int Min=a;
       if(Min>b)
        Min=b;
       if(Min>c)
        Min=c;
        if(Min>d)
        Min=d;
cout<<Min;
    return 0;
}
