#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TRANSL.inp","r",stdin);
    freopen("TRANSL.out","w",stdout);
    int a;
    cin>>a;
        if(a==2)cout<<"Monday";
    else if(a==3)cout<<"Tuesday";
    else if(a==4)cout<<"Wednesday";
    else if(a==5)cout<<"Thursday";
    else if(a==6)cout<<"Friday";
    else if(a==7)cout<<"Saturday";
    else if(a==8)cout<<"Sunday";
    else cout<<"Nhap sai";
    return 0;
}
