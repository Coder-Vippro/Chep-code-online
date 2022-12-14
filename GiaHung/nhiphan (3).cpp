#include <bits/stdc++.h>
using namespace std;
string doi (long long n)
{
    string kq="";
    while (n>0) {
        if(n%2==0) kq='0'+kq;else kq='1'+kq;
	n=n/2;
    }
    return kq;

}
int main()
{
   freopen("nhiphan.inp","r",stdin);
   freopen("nhiphan.out","w",stdout);
   long long a,b,d=0;
   cin>>a>>b;
   string kqa=doi(a);
   string kqb=doi(b);
   while (kqa.size()<kqb.size()) kqa='0'+kqa;
   while (kqa.size()>kqb.size()) kqb='0'+kqb;
   for (int i=0;i<kqa.size();i++) if (kqa[i]!=kqb[i]) d++;
   cout<<d;
}
