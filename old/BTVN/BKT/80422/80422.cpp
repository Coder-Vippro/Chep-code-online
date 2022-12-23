#include <bits/stdc++.h>
using namespace std;
int A[100001];
int n;
int demng=0;
int dembt=1;
int k;
int temp=0;
int main()
{
    freopen("80422.inp","r",stdin);
    freopen("80422.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    k=1;
    /*for(int i=1;i<=n;i++)
    {
        cout<<A[i]<<' ';
    }*/
    //cout<<'\n';
    for(int i=1;i<=n;i++)
    {
        demng=A[k];
        if(A[i]==A[i+1] && temp<A[k])
        {temp=temp+1;}
        else {k=i+1;dembt++;temp=1;}   
    }
    cout<<dembt;
}