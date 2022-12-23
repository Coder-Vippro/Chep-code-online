#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DEMCHAN.inp","r",stdin);
    freopen("DEMCHAN.out","w",stdout);
    int n;
    cin>>n;
    string a;
    int s=0;
    for(int i=0;i<n;i++){
            cin>>a;
            if(a.size()%2==0)s++;
    }
    cout<<s;
    return 0;
}

