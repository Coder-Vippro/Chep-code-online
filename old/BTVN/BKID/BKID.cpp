#include <bits/stdc++.h>
using namespace std;
int n;
int A[10001];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=2;i<=n;i++)
    {
        if(A[i-1]>A[i])
        cout<<i-1<<endl;
        else 
        {
            A[i]=A[i-1];
            cout<<i<<endl;
        }
    }   

}