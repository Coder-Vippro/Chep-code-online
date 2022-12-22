#include <bits/stdc++.h>

using namespace std;

int main()
{    freopen("DOC_SACH.inp","r",stdin);
     freopen("DOC_SACH.out","w",stdout);
     int n,t,h,tg=0,h1;
     cin>>n>>t;
     for(int i=1;i<=n;i++){
        cin>>h;tg++;
        h1=86400-h;
        t=t-h1;
        if(t<=0){
            cout<<tg;
            return 0;
        }
     }
     while(t>=0){
        tg++;
        t=t-86400;
     }
     cout<<tg;
  return 0;
}
