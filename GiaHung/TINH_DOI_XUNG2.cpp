#include <bits/stdc++.h>

using namespace std;
string daonguoc(string n){
    string s="";
for(int i=n.size()-1;i>=0;i--)s=s+n[i];
return s;
}
int main()
{
    freopen("TINH_DOI_XUNG2.inp","r",stdin);
    freopen("TINH_DOI_XUNG2.out","w",stdout);
    long long n;cin>>n;
    string s;
    for(int i=1;i<=n;i++){
    cin>>s;
    if(s==daonguoc(s))cout<<"YES";
    else cout<<"NO";
    cout<<'\n';
}
    return 0;
}
