#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAI60222.inp","r",stdin);
    freopen("BAI60222.out","w",stdout);
    int h,m,s;
    cin>>h>>m>>s;
    s++;
    if(s>59){s=0;m++;}
     if(m>59){m=0;h++;}
      if(s>23){h=0;}
      cout<<h<<" "<<m<<" "<<s;
    return 0;
}
