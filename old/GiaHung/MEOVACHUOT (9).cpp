#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    freopen("MEOVACHUOT.INP","r",stdin);
    freopen("MEOVACHUOT.OUT","w",stdout);
    cin>>a>>b>>c;
    if (abs(c-a) < abs(c-b) ) cout<<"Cat_A";
    else if (abs(c-a) > abs(c-b) ) cout<<"Cat_B";
    else cout<<"Mouse_C";
    return 0;
}
