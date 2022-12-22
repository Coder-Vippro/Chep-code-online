#include <bits/stdc++.h>
using namespace std;
long long n,a[1001];
int main()
{
freopen("THAP_XUC_XAC.inp","r",stdin);
freopen("THAP_XUC_XAC.out","w",stdout);
 cin>>n;
 for(int i=1;i<=n;i++){
        cin>>a[i];
        int b=a[i]/14,c=a[i]%14;
        if(b>0&&c>0&&c<7)cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
 }

 return 0;
}
