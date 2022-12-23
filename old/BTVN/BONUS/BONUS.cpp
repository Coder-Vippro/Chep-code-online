#include <bits/stdc++.h>
using namespace std;
int A[100001];
int main()
{
    int n;
    cin>>n;
    int vt;
    cin>>vt;
    int thoigian=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    thoigian=A[vt]+thoigian;
    A[vt]=0;
    for(int i=1;i<=n;i++)
    {
        if(i==vt)
        thoigian++;
        if(A[i]>A[i+2] && A[i]!=0)
        {thoigian=thoigian+A[i]; A[i]=0;}
        else thoigian=thoigian+A[i+2];
        A[i+2]=0;
        if(A[i]=0)
        {
            i++;
        }
        thoigian++;

    }
    cout<<thoigian;
    

}