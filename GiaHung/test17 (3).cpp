#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    string t;
    getline(cin,t);
    sort(t.begin(),t.end());
    int s=t.length-1;
    if(t[s]=t[0])cout<<t[0];
    cout<<t[s]<<" "<<t[0];
    return 0;
}
