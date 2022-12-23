#include <bits/stdc++.h>

using namespace std;

int main()
{
     freopen("UOCLE.inp","r",stdin);
  freopen("UOCLE.out","w",stdout);
    long long a,b,x;
    cin>>a>>b;
    for(long long i=a;i<=b;i++)
    {
        x=i;
         if(x%2!=0) cout<<x<<endl;
    if(x%2==0)
    {
        for(long long y=x-1;y>0;y--)
        {
            if(x%y==0&&y%2!=0) {cout<< y<<endl;break;}

        }
    }
    }

    return 0;
}
