#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    freopen("THAP_XUC_XAC.INP","r",stdin);
    freopen("THAP_XUC_XAC.OUT","w",stdout);
    int l;
    int sl;
    int du;
    cin>>l;
    for(int i=1;i<=l;i++)
    {
        cin>>n;
         sl=n/14;
         du=n%14;
         if(sl>0 && du>0 && du<7)
            cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    return 0;
}
