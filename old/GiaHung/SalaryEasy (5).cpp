#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SalaryEasy.inp","r",stdin);
    freopen("SalaryEasy.out","w",stdout);
    int n,h;
    double t;
    cin>>n>>h>>t;
    cout<<"NUMBER = "<<n<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<t*h;
    return 0;
}
