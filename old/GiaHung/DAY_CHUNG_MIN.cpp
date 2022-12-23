#include <bits/stdc++.h>

using namespace std;
bool a[5001];
int main()
{    freopen("DAY_CHUNG_MIN.inp","r",stdin);
     freopen("DAY_CHUNG_MIN.out","w",stdout);
     int n,m,so;
 cin>>n>>m;
 for(int i=1;i<=n;i++)
 {
 cin>>so;
 a[so]=1;
 }
 for(int i=1;i<=m;i++)
 {
 cin>>so;
 if(a[so]==1) { cout<<1;return 0;};
 }
 cout<<-1;
 return 0;
}
