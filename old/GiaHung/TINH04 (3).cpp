#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TINH04.inp","r",stdin);
    freopen("TINH04.out","w",stdout);
    int m,n,s1=0,s2=0;
    cin>>m>>n;
    for(int i=2;i<m;i++)  if(m%i==0) s1+=i;
    for(int j=2;j<n;j++)  if(n%j==0) s2+=j;
    if(s1==s2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
