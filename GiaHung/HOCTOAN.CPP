#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("HOCTOAN.inp","r",stdin);
    freopen("HOCTOAN.out","w",stdout);
    long long ta,tb,ma,mb,a,b,n,s;
    cin>>ta>>ma>>tb>>mb;
    if(ma==0||mb==0){cout<<-1;return 0;}
    a=ta*mb+tb*ma;b=ma*mb;
   cout<<a/__gcd(a,b)<<"/"<<b/__gcd(a,b)<<endl;
   a=ta*mb-tb*ma;b=ma*mb;
   cout<<a/__gcd(a,b)<<"/"<<b/__gcd(a,b)<<endl;
   a=ta*tb;b=ma*mb;
   cout<<a/__gcd(a,b)<<"/"<<b/__gcd(a,b)<<endl;
   if(tb==0)return 0;
   a=ta*mb;b=ma*tb;
   cout<<a/__gcd(a,b)<<"/"<<b/__gcd(a,b)<<endl;
   return 0;
}
