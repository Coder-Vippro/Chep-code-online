#include <bits/stdc++.h>

using namespace std;
string NP(int n)
{
    string s="";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) s=s+char(49);
        else s=s+char(48);
    }
    return s;
}
int x[100000];
int main()
{
    freopen("CITY.inp","r",stdin);
    freopen("CITY.out","w",stdout);
    long long n,d,s=0;
    cin>>n;
   for(int i=1;i<=n;i++)cin>>x[i];
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    if(i!=j){
      d=0;
      string a=NP(x[i]);
      string b=NP(x[j]);
      for (int i = 31; i >= 0; i--){
        if(a[i]!=b[i])d++;
      }
      if(d<=1)s++;
    }
    }
    }
    cout<<s/2;
    return 0;
}
