#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("speedfines.inp","r",stdin);
    freopen("speedfines.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a<=b) cout<<"Congratulations, you are within the speed limit!";
    else
    {
        cout<<"You are speeding and your fine is $";
        if(a-b<=20) cout<<"100";
        else if(a-b<=30) cout<<"270";
        else cout<<"500";
    }
    return 0;
}
