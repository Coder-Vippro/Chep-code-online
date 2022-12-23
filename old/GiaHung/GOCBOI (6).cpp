#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("GOCBOI.inp","r",stdin);
    freopen("GOCBOI.out","w",stdout);
    int a,s=1,dem=0;
    cin>>a;
    int sa;
    while(a/10>0){
    sa=a;
    s=1;
    while(sa>0){
        s=s*(sa%10);
        sa=sa/10;
    }
    a=s;
    dem++;
    }
    cout<<dem;
    return 0;
}
