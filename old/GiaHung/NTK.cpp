// Code by Gia Hưng Lê
// Modified by cauvangdepzai1
//Uploaded in Github
#include <iostream>
#include <cmath>
#include <array>
using namespace std;
int p[1015];
int k=0,a,i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>i>>a;
    int n=1011;
    fill(p,p+n+1,1);
    p[0]=0;p[1]=0;
    for(int i=2;i*i<=n;i++) //sang nguyen to
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<=n;j+=i) 
            p[j]=0;
        }
    }
    while(k<a)
    {
        if(p[i]==1)
        {
            k++;
        }
        i++;
    }
    cout<<i-1;
    return 0;
}