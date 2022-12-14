#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI60322.INP","r",stdin);
    freopen("BAI60322.OUT","w",stdout);
    string s;
    cin>>s;
    string k=s;
    int n=s.size();
    for(int i=1;i<n;i++)
    {
        s.erase(s.begin()+i,s.end());
        cout<<s<<endl;
        s=k;
    }
    cout<<s<<endl;
    cout<<s;
    for(int i=n-1;i>=0;i--)
    {
        s.erase(s.begin()+i,s.end());
        cout<<'\n';
        cout<<s;
        
    }
    return 0;
}