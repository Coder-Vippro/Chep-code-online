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
    for(int i=1;i<=n;i++)
    {
        if(k!=2)
        {
            if(n%i==0)
            {
                tong=tong+i;
                k++;
            }
        }
        else return tong;
    }
}
int main()
{
    freopen("SUMDIV.INP","r",stdin);
    freopen("SUMDIV.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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