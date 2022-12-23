#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAI02.inp","r",stdin);
    freopen("BAI02.out","w",stdout);
    int h,p,s;
    cin>>h>>p>>s;
    s=s+1;
    if(s>59){p=p+1;s=0;}
    if(p>59){h=h+1;p=0;}
    if(h>23){h=0;p=0;s=0;}
    cout<<h<<" "<<p<<" "<<s;
    return 0;
}
