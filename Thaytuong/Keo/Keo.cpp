#include <bits/stdc++.h>

using namespace std;
int A[10001];
int B[10001];
int n;
bool trangthai=true;
bool trangthai2=true;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>B[i];
    }
    int tong=A[1];
    for(int i=2;i<=n;i++)
    {
        if(trangthai==true && trangthai2==true)
        {
            tong=tong+A[i];

        }
        if(A[i]>B[i-1] && A[i+1]>B[i])trangthai=true;
        else if(A[i]+A[i+1]<B[i-1]+B[i])trangthai2=false;
        if(trangthai2==false){tong=tong+B[i-1];}
    }
    if(trangthai2==true)tong=tong+B[n];
    cout<<tong;
    return 0;
}

