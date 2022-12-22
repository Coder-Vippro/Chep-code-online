#include <bits/stdc++.h>

using namespace std;
int n;
int A[100001];
int main()
{
    cin>>n;
    int tong1=0;
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        tong1=tong1+A[i];
    }
    for(int i=1;i<=n;i++)
        if(A[i]==A[i+1])
           tong=tong+A[i]
           else i=i+0;
         cout<<tong1-tong;
    return 0;
}
