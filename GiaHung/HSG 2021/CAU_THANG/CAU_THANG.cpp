#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("CAU_THANG.inp","r",stdin);
 freopen("CAU_THANG.out","w",stdout);
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 for(int j=n;j>=1;j--)
 if(j>i)
cout<<" ";
else cout<<"#";
 cout<<'/n';
 }

 return 0;
}
