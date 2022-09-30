#include <bits/stdc++.h>

using namespace std;
int xe[100001];
int xang[100001];
int n;
int m;
int kq=0;
int main()
{
    freopen("THAMQUAN.INP","r",stdin);
    freopen("THAMQUAN.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>xe[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>xang[i];
    }
    sort(xe,xe+n+1);
    sort(xang,xang+m+1);
    int k=1;
    for(int i=m;i>0;i--)
	{
		swap(xang[i],xang[k]);
		k++;
	}
    for(int i=1;i<=m;i++)
    {
        kq=kq+xe[i]*xang[i];
    }
    cout<<kq;
    return 0;
}
