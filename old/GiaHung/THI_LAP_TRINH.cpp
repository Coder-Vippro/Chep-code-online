#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("THI_LAP_TRINH.inp","r",stdin);
    freopen("THI_LAP_TRINH.out","w",stdout);
    long long t,a,b,to;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        to=(a+b)/4;
        cout<<min(to,min(a,b))<<endl;
    }
    return 0;
}
