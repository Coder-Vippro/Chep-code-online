#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SOHT.INP","r",stdin);
    freopen("SOHT.OUT","w",stdout);
    long long n;
    cin>>n;
    long long tong=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0 && tong<n)
        {
            tong=tong+i;
        }
        if(tong>n)
        {
            cout<<"KHONG";
            return 0;
        }
        else if(tong==n)
        {
            cout<<"CO";
            return 0;
        }

    }
    cout<<"KHONG";
}