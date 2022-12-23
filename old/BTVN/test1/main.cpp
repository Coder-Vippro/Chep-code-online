#include <bits/stdc++.h>
using namespace std;
int A[1000];
int dem=0;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a+b+c;i++)
    {
        if(i<=a)
        {
            A[i]=1;
        }
        if(i<=b && i>a)
        {
            A[i]=2;
        }
        if(i<=c && i>c)
        {
            A[i]=3;
        }
    }
    for(int i=1;i<=a+b+c;i++)
    {
        for(int j=1;j<=a+b+c;j++)
        {
            if(A[i]!=A[j] && A[i]<A[j])
            dem++;
        }
    }
    cout<<dem;
}   