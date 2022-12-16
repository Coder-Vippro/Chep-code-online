#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;int s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+(i*(i+2));
    }
    cout<<s;
    return 0;
}
