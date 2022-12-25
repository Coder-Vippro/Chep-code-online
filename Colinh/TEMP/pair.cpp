#include <iostream>
#include <algorithm>
pair<int,int> p;
using namespace std;
int n;
int main()
{
    freopen("pair.INP","r",stdin);
    freopen("pair.OUT","w",stdout);
    for(int i=1;i<=n;i++)
    {
        cin>>p.first>>p.second;
        cout<<p.second<<" "<<p.first;

    }
}