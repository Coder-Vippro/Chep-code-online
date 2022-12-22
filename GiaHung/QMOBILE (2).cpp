#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("QMOBILE.INP","r",stdin);
    freopen("QMOBILE.OUT","w",stdout);
    long long a,b=1000000000;
    cin>>a;
    for(int i=10;i>=1;i--){

        cout<<a/b%10<<" ";
        b=b/10;
    }
    return 0;
}
