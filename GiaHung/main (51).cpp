////ON TAP 73

#include <bits/stdc++.h>

using namespace std;
int n,t=0;
int main()
{
    cin>>n;
    int m=n,k=0;
    while (m!=0)
    {
        k++;
        m/=10;
    }
    m=n;
    while(m!=0)
    {
        t+=pow((m%10),k);
        m/=10;
    }
    if(n==t) cout<<"YES";
    else cout<<"NO";
    return 0;
}
