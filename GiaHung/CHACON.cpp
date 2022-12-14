#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    freopen("CHACON.INP","r",stdin);
    freopen("CHACON.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(int i=0;i<=80;i++)
    {
        if(a/b==2 && a%b==0)
        {
            cout<<i;
            return 0;
        }
        else
        {
            a++;
            b++;
        }
    }
    
    return 0;
}   