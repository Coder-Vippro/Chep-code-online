#include <bits/stdc++.h>
using namespace std;
long long n;
int a[1000005];
vector<long long> s;
int main()
{
    freopen("HAITAP.INP","r",stdin);
    freopen("HAITAP.OUT","w",stdout);
    cin>>n;
    long long tong=n*(n+1)/2;
    if(tong%2==1) 
    {
        cout<<"NO";
        return 0;
    }
    tong=tong/2;
    cout<<"YES"<<endl;
    for(int i=n;i>=1;i--)
        if(tong>=i) 
    {
            s.push_back(i);
            tong-=i;
        }
    if(tong!=0) 
        {
        cout<<"NO";
        return 0;
        }
    cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++) 
        {
        cout<<s[i]<<' ';
        a[s[i]]=1;
        }
    cout<<endl<<n-s.size()<<endl;
    for(int i=1;i<=n;i++)
        if(a[i]==0) cout<<i<<' ';
    return 0;
}