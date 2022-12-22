#include <bits/stdc++.h>
using namespace std;
int A[10001];
int n;
int d1[10001];
int d2[10001];
int d3[10001];
int l,r;
int main()
{
    //freopen("OLYMPIC.INP","r",stdin);
    //freopen("OLYMPIC.OUT","w",stdout);
    cin>>n;
    int h;
    cin>>h;
    d1[0]=d2[0]=d3[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i-1];
        d1[i]=d1[i-1];
        d2[i]=d2[i-1];
        d3[i]=d3[i-1];
        if(A[i]==1)d1[i]++;
        if(A[i]==2)d2[i]++;
        if(A[i]==3)d3[i]++;
    }
    while(h--)
    {
        cin>>l>>r;
        cout<<d1[l]-d1[r-1]<<' '<<d2[l]-d2[r-1]<<' '<<d3[l]-d3[r-1]<<endl;
    }
    


}