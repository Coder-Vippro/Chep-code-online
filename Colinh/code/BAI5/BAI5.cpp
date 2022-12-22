#include <bits/stdc++.h>

using namespace std;
int A[100001];
int n;
int k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            if((A[i]+A[j])/2==k)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
