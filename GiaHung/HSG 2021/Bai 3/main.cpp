#include <iostream>

using namespace std;
int k,s,m;
int tcs(int n)
{
    int t=0;
    while(n>0)
    {
        t+=n%10;n/1-;
    }
}
int main()
{
    freopen("timso.inp", "r", stdin);
    freopen("timso.out" , "w", stdout);
    while(cin>>k>>s>>m)
    {
        int Min=pow(10,k-1),d=0;
        if(Min%m!=0)Min=m*(Min/m+1)
            for(int i=Min; i<pow(10,k);i+=m)
            if(tcs(i)==s)d++;
        cout<<d<<'\n';
    }
    return 0;
}
