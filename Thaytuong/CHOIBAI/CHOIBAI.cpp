#include <bits/stdc++.h>

using namespace std;
int n;
int A[10001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    reverse(A+1,A+n+1);
    int dem1=0,dem2=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)dem1=dem1+A[i];
        else dem2=dem2+A[i];
    }
    cout<<dem1<<" "<<dem2;
    return 0;
}
