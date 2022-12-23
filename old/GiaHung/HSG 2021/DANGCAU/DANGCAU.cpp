#include <bits/stdc++.h>

using namespace std;
int n;
string a;
string b;
int main()
{
    freopen("DANGCAU.INP","r",stdin);
    freopen("DANGCAU.OUT","w",stdout);
    cin>>n;
    while(n>0)
{
    cin>>a>>b;
    if(a[0]=='0'||b[0]=='0')
    {
        cout<<"KHONG";
    }
    else if(a.size()!= b.size())
    {
        cout<<"KHONG";
    }
    else if(a[a.size()-1] == a[a.size()-2] || b[b.size()-1] == b[b.size()-2])
    {
        cout<<"KHONG";
    }
    else if(a[0]==a[2] && b[0]==b[2])
    {
        cout<<"CO";
    }
    else
    {
        unsigned int dem=0;
        for(unsigned int i=0;i<=a.size();i++)
        {
            if(a[i]==b[i])
                dem++;
        }
        if(dem==a.size())
            cout<<"CO";
    }
    n--;
}
    return 0;
}
