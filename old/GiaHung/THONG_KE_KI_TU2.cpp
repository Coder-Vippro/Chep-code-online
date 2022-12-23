#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("THONG_KE_KI_TU2.inp","r",stdin);
    freopen("THONG_KE_KI_TU2.out","w",stdout);
int n;cin>>n;int d[26];
    string s;
    for(int i=0;i<26;i++) d[i]=0;
     for(int i=0;i<=n;i++){
    getline(cin,s);
        for(int k=0;k<s.length();k++)
            {
              int ma=s[k];
              ma=ma-97;
              d[ma]++;
            }
     }
        for(int i=0;i<26;i++)
            if(d[i]>0) cout<<char(i+97)<<": "<<d[i]<<endl;
}
