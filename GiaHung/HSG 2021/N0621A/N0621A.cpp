#include <bits/stdc++.h>

using namespace std;
string a;
int main()
{
    freopen("N0621A.inp","r",stdin);
    freopen("N0621A.out","w",stdout);
    getline(cin,a);
    for(int i=a.size()-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
