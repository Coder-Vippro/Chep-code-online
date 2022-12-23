#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BIPHAT.inp","r",stdin);
    freopen("BIPHAT.out","w",stdout);
    int n,so,d=0;
    cin>>n;
        for(int i=1;i<=n;i++);{
           cin>>so;
           if (so==1)d++;else d--;
        }
        cout<<abs(d);
    return 0;
}
