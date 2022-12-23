#include<bits/stdc++.h>
using namespace std;
int A[100001];
int n,x;
int keo=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(A[i]+A[i+1]<x)
        i=i+1;
        if(A[i]+A[i+1]>x && A[i]<x)
        while(A[i]+A[i+1]>x)
        {
            keo++;
            A[i+1]--;
        }
        if(A[i]+A[i+1]>x && A[i]>x && A[i+1]<x)
        while(A[i]+A[i+1]>x)
        {
            keo++;
            A[i]--;
        }
        else if(A[i]>x && A[i+1]>x)
        {
            A[i+1]--;
            keo++;
            A[i]--;
            keo++;
        }
        else if(A[i]==x && A[i+1]>x)
        {
            keo=keo+A[i+1];
            A[i+1]=0;
        }
        else if(A[i+1]==x && A[i]>x)
        {
            keo=keo+A[i];
            A[i]=0;
        }
        else if(A[i]==A[i+1] && A[i+1]==x)
        {
            keo=keo+A[i];
            A[i]=0;
        }
    }
    cout<<keo;
}
