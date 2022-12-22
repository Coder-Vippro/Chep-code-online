#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai05.inp","r",stdin);
    freopen("Bai05.out","w",stdout);
    char a;
    cin>>a;
    if(a>='a'&&a<='z')cout<<1;
    else if(a>='A'&&a<='Z')cout<<2;
    else cout<<0;
    return 0;
}
