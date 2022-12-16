#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;int s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s+=pow(i,3);
    }
    cout<<s;
    return 0;
}
