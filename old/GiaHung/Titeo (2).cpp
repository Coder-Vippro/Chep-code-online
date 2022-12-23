#include <iostream>

using namespace std;
int a,b,k,x,y;
int main()
{
    cin>>a>>b>>k>>x>>y;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k-i;j++)
        {
            if(a+x*i==b+j*y)
            {
                cout<<i;
                return 0;
            }
        }
    }
    cout<<"-1";
    return 0;
}
