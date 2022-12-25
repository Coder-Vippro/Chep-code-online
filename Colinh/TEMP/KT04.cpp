#include <bits/stdc++.h>

using namespace std;
int m,n;
int main()
{
    //freopen("KT04.inp","r",stdin);
	//freopen("KT04.out","w",stdout);
	cin>>m>>n;int x=min(m,n);
	for(int i=2;i<=x;i++){
            if(m%i!=0&&n%i==0){cout<<0;return 0;}
            if(m%i==0&&n%i!=0){cout<<0;return 0;}
        while(m%i==0)m=m/i;
        while(n%i==0)n=n/i;
        cout<<m<<' '<<n<<'\n';
	}
	cout<<1;
    return 0;
}
