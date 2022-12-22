#include <bits/stdc++.h>
using namespace std;
long long n;
long long x,y;
int main()
{
    freopen("XOANOC.INP","r",stdin);
    freopen("XOANOC.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>y>>x;
        if(y%2==0)
        {
            if(x<=y)cout<<y*y-x+1<<endl;
            else if(x>y)
            {
                if(x%2==1)
                cout<<x*x-y+1<<endl;
                else cout<<(x-1)*(x-1)+1+y-1<<endl;
            }
        }
        else
        {
            if(x<=y)cout<<(y-1)*(y-1)+x<<endl;
            else 
            {
                if(x%2==0)
                cout<<(x-1)*(x-1)+y<<endl;
                else if(x%2==1)cout<<x*x-y+1<<endl;
            }
        }

    }
}