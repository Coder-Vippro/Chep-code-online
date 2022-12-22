#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    int dem=0;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        dem++;
    }
    cout<<dem;
}