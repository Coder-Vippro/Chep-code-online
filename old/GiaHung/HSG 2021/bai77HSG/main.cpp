#include <iostream>

using namespace std;
int n,m=-1;
int main()
{
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        int t=i,j=i+1,d=1;
        while(t<n)
        {
            t+=j;
            j++;
            d++;

        }
        if(t==n && m<d)m=d;
    }
    if(m==-1) cout<<"IMPOSSIBLE";
    else cout<<m;
    return 0;
}
