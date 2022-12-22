#include <bits/stdc++.h>
using namespace std;
int tach(long long n){
    int s=0;
   for(int i=2;i<=n;i++)
        if(n%i==0)while(n%i==0){s++;n=n/i;}
   return s;
}
int main()
{
    freopen("HAYHO.inp","r",stdin);
    freopen("HAYHO.out","w",stdout);
    int n,a,b,s=0;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>a;
            if(tach(a)>1)s++;
    }
    cout<<s;
   return 0;
}
