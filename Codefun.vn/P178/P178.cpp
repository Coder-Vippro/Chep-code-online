#include <bits/stdc++.h>
using namespace std;
int A[100001];
int main()
{
    int n;
    cin>>n;
    int dem=0;
    int maxx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(A[i-1]<A[i])
        dem++;
        else {cout<<dem; return 0;}
        if(maxx<dem)
        maxx=dem;
    }
}
