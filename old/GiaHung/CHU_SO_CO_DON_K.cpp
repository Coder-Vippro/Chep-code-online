#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHU_SO_CO_DON_K.inp","r",stdin);
    freopen("CHU_SO_CO_DON_K.out","w",stdout);
    string s;cin>>s;
   int n=s.size(),ma,d[10],x=0,t;
   cin>>t;
    for(int i=0;i<10;i++) d[i]=0;
        for(int k=0;k<=n;k++){
               int ma=s[k];
              ma=ma-48;
              d[ma]++;
            }
        for(int i=0;i<10;i++)if(d[i]==t)x++;
        if(x==0)cout<<-1;
        else cout<<x;
}

