#include <bits/stdc++.h>
using namespace std;
int A[10001];
int n;
int L[10001];
int main()
{
    cin>>n;
    int dem;
    for(int i=1;i<=n;i++)cin>>A[i];
    vector<int> A(n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(A[i]>A[j])
            L[i]=max(L[i],L[j]+1);
        }
    }
    cout<<*max_element(L.begin(),L.end());
}