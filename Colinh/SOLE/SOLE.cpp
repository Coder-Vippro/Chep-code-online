#include <bits/stdc++.h>
using namespace std;
int a,b;
int kq=0;
int main()
{
    freopen("SOLE.INP","r",stdin);
    freopen("SOLE.OUT","w",stdout);
    for(int i=a;i<=b;i++)
    {
        if(i%2==1 && i<10)kq++;
        if(i%2==0 && i>9)
        {
            kq++;
        }
    }
    cout<<kq;
}