#include <bits/stdc++.h>
using namespace std;
bool ktstam(long long n)
{
    if(n<0)
    n=n*-1;
    while(n>0)
    {
        if(n%10==8)
        {
            return true;
        }
        else n=n/10;
    }
    return false;
}
int main()
{
    long long n;
    cin>>n;
    int dem=0;
    int a=1;
    int b=2;
    while(a<b)
    {
        if(ktstam(n+1)==true)
        { dem++; cout<<dem; return 0;}
        else { n++; dem++;}
    }
}