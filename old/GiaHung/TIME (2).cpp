#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("time.inp","r",stdin);
    freopen("time.out","w",stdout);
    int h,m,s;
    cin>>h>>m>>s;
    int h1,m1,s1;
    s1 =s+1;
    if(s1>59) {s1=0;  m1=m+1;}
    if(m1>59) {m1=0;  h1=h+1;}
    if(h1>59) h1=0;
    if(h>23 || m>59 ||s>59) cout<<"NO";
    else cout<<"YES"<<endl<<h1<<":"<<m1<<":"<<s1;
    return 0;
}
