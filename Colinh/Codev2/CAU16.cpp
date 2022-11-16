#include <bits/stdc++.h>
using namespace std;
int N[259],ma,x,le;
int main()
{
    string s;cin>>s;
    fill(N,N+257,0);
    for(int i=0;i<s.size();i++){N[int(s[i])]++;ma=max(ma,int(s[i]));}
    for(int i=0;i<=ma;i++){if(N[i]%2!=0){x++;le=i;}if(x==2){cout<<"NO SOLUTION";return 0;}}
    for(int i=0;i<=ma;i++){
        for(int j=1;j<=N[i]/2;j++)cout<<char(i);
    }
    cout<<char(le);
    for(int i=ma;i>=0;i--){
        for(int j=1;j<=N[i]/2;j++)cout<<char(i);
    }
    return 0;
}