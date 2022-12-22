#include <bits/stdc++.h>

using namespace std;
int demcs(int n)
{
    int s=0;
    int r;
    while(n!=0)
    {
       r=n%10;
       n=n/10;
       s+=1;
    }
    return s;
}
bool check(int n,int k)
{
    int r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if((k+r)%2!=0)
            return false;

        k--;
    }
    return true;
}
int main()
{
    long long n,k;
    cin>>n;
    k=demcs(n);
    if(check(n,k))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
