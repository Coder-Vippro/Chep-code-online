#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen ("Chi_so_BMI.inp","r",stdin);
    freopen ("Chi_so_BMI.out","w",stdout);
    double a,b,c;
    cin>>a>>b;
    c=a/b/b;
    cout<<fixed<<setprecision(1)<<c<<endl;
    if(c<18.5)cout<<"Ban gay do, can chen nhieu..he...he";
    else if(c<25)cout<<"Ban binh thuong, co gang giu gin";
    else if(c<30)cout<<"Ban tien beo phi";
    else if(c<35)cout<<"Ban beo phi do I";
    else if(c<40)cout<<"Ban beo phi do II";
    else cout<<"Ban beo phi do III";
    return 0;
}
