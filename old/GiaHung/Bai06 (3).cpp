#include <bits/stdc++.h>
using namespace std;
long n,a,b,c;
int xe16,xe30,xe45;
long long s,x,t;
int main()
{
    freopen("Bai06.inp","r",stdin);
    freopen("Bai06.out","w",stdout);
    cin>>n>>a>>b>>c;
    xe45=n/45;
    xe30=n/30;
    xe16=n/16;
    if((c*xe45<=b*xe30)&&(c*xe45<=a*xe16))
    {
        t=c*xe45;
        n=n%45;
        xe30=1;xe16=1;
        if(n>30) xe30++;
        if(n>16) xe16++;
        if(b*xe30<a*xe16) {t=t+b*xe30; cout<<t<<" "<<0<<" "<<xe30<<" "<<xe45;}
         else {t=t+a*xe16;cout<<t<<" "<<xe16<<" "<<0<<" "<<xe45;}

    }
    else if((b*xe30<=c*xe45)&&(b*xe30<=a*xe16))
    {
        t=b*xe30;
        n=n%30;
        xe45=1;xe16=1;
        if(n>16) xe16++;
        if(c*xe45<a*xe16) {t=t+a*xe45; cout<<t<<" "<<0<<" "<<xe30<<" "<<xe45;}
         else {t=t+a*xe16;cout<<t<<" "<<xe16<<" "<<xe30<<" "<<0;}

    }
      else if((a*xe16<=c*xe45)&&(a*xe16<=b*xe30))
    {
        t=a*xe16;
        n=n%16;
        xe45=1;xe30=1;
        if(c*xe45<b*xe30) {t=t+a*xe45; cout<<t<<" "<<xe16<<" "<<0<<" "<<xe45;}
         else {t=t+b*xe30;cout<<t<<" "<<xe16<<" "<<xe30<<" "<<0;}

    }


}
