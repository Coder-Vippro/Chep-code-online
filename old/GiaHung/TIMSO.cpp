#include <bits/stdc++.h>
using namespace std;

    int SCS(int n)
{
    int d=0;
    while (n > 0)
    {
        n /= 10;
        d++;
    }
    return d;
}
int main()
{
    //freopen("TIMSO.inp","r",stdin);
    //freopen("TIMSO.out","w",stdout);
    int a,b,c,d=0;
    cin>>a;
for (int i=0;i<a;i++){
    if(TCS(a)==TCS(i) && SCS(a)==SCS(i)) b=i;
}
    cout<<b;
    return 0;
}
