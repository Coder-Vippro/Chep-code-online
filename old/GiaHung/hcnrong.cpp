#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("hcnrong.inp","r",stdin);
	freopen("hcnrong.out","w",stdout);
	long long a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
            if(i==a||j==b||i==1||j==1) cout<<"*";
        else cout<<" ";
        cout<<endl;
    }
	return 0;
}
