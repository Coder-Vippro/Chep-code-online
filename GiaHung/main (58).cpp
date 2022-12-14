#include <bits/stdc++.h>

using namespace std;
int a;
int main()
{
    cin>>a;
    int dem=0;
    double m[sqrt(a)];
    for(int i=2; i<=sqrt(a); i++)
    {
        cin>>m[sqrt(a)];
    }
    if(m[sqrt(a)]<a)
    {
        dem++;
    }
    return 0;
}
