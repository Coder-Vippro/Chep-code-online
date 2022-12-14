#include <bits/stdc++.h>

using namespace std;
int p[1000005];
int n;
long long s=0;
int main()
{
    freopen("ONTINH03","r",stdin);
    freopen("ONTINH03","w",stdout);
    cin>>n;
    for(int i=2;i<=1000000;i++)
        p[i]=true;
    for(int i=2;i<=1000000;i++)
    {
        if(p[i]==true)
        {
            for(int j=2;i*j<=1000000;j++)
            {
                p[i*j]=false ;
            }
        }
    }
    for(int i=2;i<=n;i++)
        if(p[i]==true)  s+=1;
    cout<<s<<'\n';
    if(p[s]==true)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
