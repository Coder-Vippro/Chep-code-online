#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
int fb(int n)
{
    if(n==1||n==2||n==3) return n;
    return fb(n-2)+fb(n-1);
}
int Fibo(int n)
{
    int i=1;
    while(n>fb(i))
    {
        i++;
    }
    if(n==fb(i))return 1;
    return 0;
}
bool ktcp(int n)
{
    int k=sqrt(n);
    if(k*k==n)return true;
    return false;
}
bool ktdx(int n)
{
    string s;
    stringstream ss;
    ss<<n;
    ss>>s;
    string k=s;
    reverse(s.begin(),s.end());
    if(k==s)return true;
    return false;
}
bool ktmm(string k, int n)
{
    if(n%k.size()==0)return true;
    return false;
}
int n;
string k;
int main()
{
    freopen("KT02.INP","r",stdin);
    freopen("KT02.OUT","w",stdout);
    cin>>n;
    sangngto(n);
    int demnt=0;
    int demfibo=0;
    int demcp=0;
    int demdx=0;
    int demmayman=0;
    stringstream ss;
    ss<<n;
    ss>>k;
    for(int i=0;i<n;i++)
    {
        if(p[i]==1)demnt++;
        if(Fibo(i)==1 && i<n){demfibo++;}
        if(ktcp(i)==true)demcp++;
        if(ktdx(i)==true)demdx++;
        if(ktmm(k,i)==true)demmayman++;
    }
    cout<<demnt<<'\n'<<demfibo<<'\n'<<demcp<<'\n'<<demdx<<'\n'<<demmayman;
    
}