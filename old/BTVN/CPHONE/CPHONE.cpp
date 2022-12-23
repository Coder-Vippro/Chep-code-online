#include <bits/stdc++.h>
using namespace std;
int a[100001];
int TS[100001];
int main()
{
    //freopen("CPHONE.INP","r",stdin);
    //freopen("CPHONE.OUT","w",stdout);
    int n;
    cin>>n;
    int maxx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        TS[a[i]]++;
    }
    
    for(int i=1;i<=100001;i++)
    if(TS[i]>maxx)
    maxx=TS[i];
    for(int i=1;i<=100001;i++)
    {
        if(maxx==TS[i])
        cout<<i<<endl;
    }
    

}