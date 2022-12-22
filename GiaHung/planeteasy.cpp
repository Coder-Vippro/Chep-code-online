#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("PlanetEasy.inp","r",stdin);
    freopen("PlanetEasy.out","w",stdout);
    int n;
    cin>>n;
    cout<<n/360<<" ";
    n=n%360;
    cout<<n/30<<" "<<n%30;
    return 0;
}
