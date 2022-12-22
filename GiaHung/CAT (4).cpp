#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("CAT.inp","r",stdin);
   freopen("CAT.out","w",stdout);
        long long a,b,c;
        cin>>a>>b>>c;
        if (abs(c-a) > abs(c-b)) cout<<"Cat A";
        else if (abs(c-a) < abs(c-b)) cout<<"Cat B";
        else  cout<<"The mouse has escaped";
}
