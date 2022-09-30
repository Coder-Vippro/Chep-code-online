#include <bits/stdc++.h>
using namespace std;
bool ktdm(int n, int m)
{
    if(n<7)return true;
    if(n>7)return false;
    if(n==7 && m>5)
    return false;
    if(n==7 && m<=5)
    return true;
    return false;
}
int main()
{
    int a,b;
    int c=6;
    int dem=0;
    while(c--)
    {
        cin>>a>>b;
        if(ktdm(a,b)==false)
        dem++;
    }
    if(dem>2)
    {
        cout<<":(";
    }
    else cout<<":)";
}