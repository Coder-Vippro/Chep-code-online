#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    freopen("N0621A.INP","r",stdin);
    freopen("N0621A.OUT","w",stdout);
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x<0)
        cout<<0<<' ';
        else cout<<x<<' ';
    }
    return 0;
}