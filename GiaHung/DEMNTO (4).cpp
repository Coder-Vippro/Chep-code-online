#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("demnto.inp","r",stdin);
    freopen("demnto.out","w",stdout);
    int a,t,dem=0;
    cin>>a;
    for (int b=1;b<=a;b++){
        t = 0;
    for(int i = 2; i <= sqrt(b); i++){
        if(b % i == 0)t++;
        }
    if(t==0)dem++;
    }
    cout<<dem-1;
    return 0;
}
