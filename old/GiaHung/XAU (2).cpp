#include <bits/stdc++.h>
using namespace std;
bool kt(string a){
    int kt;
    if(a.size()>1) kt=a[a.size()-1]-48+(a[a.size()-2]-48)*10;
    else kt=a[a.size()-1]-48;
    if(kt%4==0)return 1;
    return 0;
}
int main(){
    //freopen("XAU.inp","r",stdin);
    //freopen("XAU.out","w",stdout);
    string a;
    cin>>a;
    int n=a.size(),s=0;
   for(int i=0;i<n;i++)
       for(int j=1;j<=n-i;j++)if(kt(a.substr(i,j)))s++;
    cout<<s;
    return 0;
}
