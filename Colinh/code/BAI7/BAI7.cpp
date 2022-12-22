#include <bits/stdc++.h>

using namespace std;
int n,m;
int s[100001];
int main()
{
    cin>>n>>m;
    int k=n+m;
    for(int i=1;i<=k;i++)
    {
        cin>>s[i];
    }
    sort(s,s+k+1);
    for(int i=1;i<=k;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<s[i]<<' ';
        }
    }
    return 0;
}
