#include <bits/stdc++.h>

using namespace std;
int p[1000005];
int n;
long long s=0;
int main()
{
    cin>>n;
    for(int i=2;i<=1000000;i++)
        p[i]=1;
    for(int i=2;i<=1000000;i++)
    {
        if(p[i]==1)
        {
            for(int j=2;i*j<=1000000;j++)
            {
                p[i*j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++)
        if(p[i]==1)  s+=1;
    cout<<s<<'\n';
    if(p[s]==1)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
