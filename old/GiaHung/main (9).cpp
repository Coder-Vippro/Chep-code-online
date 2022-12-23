#include <bits/stdc++.h>
using namespace std;

int main()
{    //freopen("code_tayto1.inp","r",stdin);
     //freopen("code_tayto1.out","w",stdout);
    int x;cin>>x;
    int s=0,n=x;int d=0,c,e,g;
    while(n>0){
        n=n/10;d++;
    }
    for(int i=d-1;i>=0;i--){
    e=pow(10,i);
    if(e%10!=0&&e!=1)e++;
            c=(x%10)*e;
             cout<<s<<" "<<e<<'\n';
        s=s+c;
        x=x/10;
    }
     cout<<s;
  return 0;
}
