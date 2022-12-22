#include <bits/stdc++.h>
using namespace std;
int kq=0;
int n;
int x;
bool flag=false;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(A[i]<A[i+1]||(A[i-1]>A[i] && A[i]<A[i+]))
        {cout<<i;flag=true;}
    }
    if(flag==false)cout<<"NO SOLUTION";
    return 0;
}