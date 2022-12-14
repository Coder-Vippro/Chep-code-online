#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("TET.inp","r",stdin);
    freopen ("TET.out","w",stdout);
    int b,a,s=0,c,d=0;
    cin>>a>>b>>c;
    while(s<c){
        s=s+a;
        a=a+b;
        d++;
    }
    cout<<d<<endl<<s;
    return 0;
}
