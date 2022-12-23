#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Flip.inp","r",stdin);
    freopen("Flip.out","w",stdout);
   int a,sodaoa=0,b ,sodaob=0;
    cin>>a>>b;
    while (a>0)
    {
    sodaoa=sodaoa*10+a%10;
    a=a/10;
    }
    while (b>0)
    {
    sodaob=sodaob*10+b%10;
    b=b/10;
    }
    if(sodaoa>sodaob)cout<<sodaoa;
    else if(sodaoa<sodaob)cout<<sodaob;
    return 0;
}
