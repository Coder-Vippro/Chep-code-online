#include <bits/stdc++.h>

using namespace std;

int main()
{
freopen("PAPER.inp","r",stdin);
freopen("PAPER.out","w",stdout);
    long long a,b,d=0;cin>>a>>b;
    while(a!=b){
            d++;
        if(a>b)a=a-b;
        else if(a<b)b=b-a;
    }
    cout<<d+1;
    return 0;
}
