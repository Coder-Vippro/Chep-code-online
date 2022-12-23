#include <bits/stdc++.h>
using namespace std;
int A[1000001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int x;
    cin>>x;
    int dem;
    for(int i=1;i<=n;i++)
    {
        if(A[i]%2==0 && x>0)
        {
            x--;
            dem=i;
        }
    }
    for(int i=1;i<dem;i++)
    {
        cout<<A[i];
    }
}