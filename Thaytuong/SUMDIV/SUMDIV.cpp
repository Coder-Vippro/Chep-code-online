#include <bits/stdc++.h>
using namespace std;
int A[100001];
int tong1(int n)
{
    int k=0;
    int tong=0;
    if(n%2==0)
    {
        tong=tong+3;
        return tong;
    }
    if(n%2==1)
    {
        for(int i=1;i<=n;i+=2)
        {
            if(n%i==0)
            {tong=tong+i;k++;}
            if(k==2)
            {
                return tong;
            }
        }
    }
    return tong;
}
int main()
{
    freopen("SUMDIV.INP","r",stdin);
    freopen("SUMDIV.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n,m,x,y;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	while(m--)
	{
        int kq=0;
		cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            kq=kq+tong1(A[i]);
        }
        cout<<kq<<endl;
        kq=0;
	}
}