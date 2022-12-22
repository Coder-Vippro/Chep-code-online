#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=1011;
    int p[n+2];
    int m=0,a,i;
    cin>>i>>a;
    fill(p,p+n+1,1);
    p[0]=0;p[1]=0;
    for(int i=2;i*i<=n;i++)if(p[i]==1)for(int j=i*i;j<=n;j+=i) p[j]=0;
    while(m<a){
        if(p[i]==1)m++;
        i++;
    }
    cout<<i-1;
    return 0;
}
