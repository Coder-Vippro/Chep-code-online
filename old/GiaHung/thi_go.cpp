#include <bits/stdc++.h>

using namespace std;

int main()
{    freopen("thi_go.inp","r",stdin);
     freopen("thi_go.out","w",stdout);
     int s,v1,v2,t1,t2,kq1,kq2;
     cin>>s>>v1>>v2>>t1>>t2;
     kq1=2*t1+v1*s;
     kq2=2*t2+v2*s;
     if(kq1<kq2)cout<<"First";
     else if(kq1>kq2)cout<<"Second";
     else cout<<"Friendship";
  return 0;
}
