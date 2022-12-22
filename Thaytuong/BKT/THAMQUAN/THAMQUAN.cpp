#include <bits/stdc++.h>
using namespace std;
int n,A[100001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tong;
    cin>>n>>A[1];
    tong=abs(A[1]);
    for(int i=2;i<=n;i++)
    {
        cin>>A[i];
        tong=tong+abs(A[i-1]-A[i]);
    }
    tong=tong+abs(A[n]);
    cout<<tong-abs(A[1])-abs(A[1]-A[2])+abs(A[2])<<'\n'; // bo dia diem dau tien
    for(int i=2;i<n;i++)
    cout<<tong-abs(A[i]-A[i-1])-abs(A[i]-A[i+1])+abs(A[i-1]-A[i+1])<<'\n'; //bo tung dia diem A[i]
    cout<<tong-abs(A[n])-abs(A[n]-A[n-1])+abs(A[n-1]); //bo dia diem cuoi
    return 0;
}
