#include <bits/stdc++.h>

using namespace std;
long long t(long long x){
long long s=0,a=x;
while(a>0){
     s=s+a%10;
    a/=10;
    }
    return s;
}
int main()
{
    freopen("SO_TOT.inp","r",stdin);
    freopen("SO_TOT.out","w",stdout);
    long long a,b;
    cin>>a>>b;
    if(t(a)>t(b))cout<<a<<" tot hon "<<b;
    else if (t(a)<t(b))cout<<b<<" tot hon "<<a;
    else{
        if(a>b)cout<<a<<" tot hon "<<b;
        else if (a<b)cout<<b<<" tot hon "<<a;
    }
 return 0;
}
