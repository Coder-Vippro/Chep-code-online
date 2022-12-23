#include <bits/stdc++.h>

using namespace std;
char c;
int main()
{

    freopen("Bai05.inp","r",stdin);
    freopen("Bai05.out","w",stdout);
    cin>>c;
    if(c>='a'&&c<='z')
        cout<<1;
    else
        if(c>='A'&&c<='Z')
            cout<<2;
        else
            cout<<0;
    return 0;
}
