#include <bits/stdc++.h>
using namespace std;
int A[100001];
int Min=1e9+1;
int Max=-1e9;
int vtmin,vtmax;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin>>A[i];
        if(Min>A[i]){Min=A[i];vtmin=i;}
        if(Max<A[i]){Max=A[i];vtmax=i;}
    }
    int temp=A[vtmin];
    A[vtmin]=A[vtmax];
    A[vtmax]=temp;
    for(int i=1;i<=t;i++)
    {
        cout<<A[i];
    }

}