#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("AverageEasy.inp","r",stdin);
    freopen("AverageEasy.out","w",stdout);
    double a,b;
    cin>>a>>b;
    double t=a*3.5+b*7.5;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<t/(3.5+7.5);
    return 0;
}
