#include <bits/stdc++.h>

using namespace std;
int dao(int x){
   int s=0,n=x;int d=0,c,e,g;
    while(n>0){
        n=n/10;d++;
    }
    for(int i=d-1;i>=0;i--){
    e=pow(10,i);
    if(e%10!=0&&e!=1)e++;
            c=(x%10)*e;
        s=s+c;
        x=x/10;
    }
    return s;
}
bool kt(int n){
    int m=dao(n);
    if(__gcd(m,n)==1)return 1;
    else return 0;
}
int main()
{
    freopen("sotl.inp","r",stdin);
    freopen("sotl.out","w",stdout);
    long long a,b,d=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)if(kt(i)==1){d++;}
    cout<<d;
    return 0;
}



