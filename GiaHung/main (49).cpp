#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[10000001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cout<<a[i];
    for(int i=1;i<=n;i++)
    {
        int d=0;
        for(int j=1;j<=n;j++)
            if(a[i]==a[j])  d++;
        if(d==1)
        {
            cout<<a[i];
            return 0;
        }
    }

    return 0;
}
