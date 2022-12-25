#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int n;
pair <int, int> a;
int main()
{
    freopen("pair.INP","r",stdin);
    freopen("pair.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a.first>>a.second;
        cout<<a.second<<" "<<a.first<<'\n';
    }
}
/*#include <iostream>
#include <utility>
#include <vector>
using namespace std;
vector <int> v;
int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    int x;
    while(cin>>x)
    {
        v.push_back(x);
    }
    int k=v.size();
    cout<<v[k/2];
}*/