#include <bits/stdc++.h>
using namespace std;
//Tinh gia tri cua a va b voi dau=0--> a+b; dau=1 --> a-b; dau=2 --> a*b
int tinh(int a,int dau,int b)
{
    if(dau==0) return a+b;
    else if (dau==1) return a-b;
    else return a*b;
}
char doi(int dau)
{
   if(dau==0) return '+';
    else if (dau==1) return '-';
    else return '*';
}
int main()
{
    freopen("giatri.inp","r",stdin);
    freopen("giatri.out","w",stdout);
    int n,m;
    char dau1,dau2,dau3;
    int ok=0;
    cin>>m>>n;
    for(int d1=0;d1<3 && ok==0;d1++)
        for(int d2=0;d2<3 && ok==0;d2++)
           for(int d3=0;d3<3 && ok==0;d3++)
           {
               dau1=doi(d1);
               dau2=doi(d2);
               dau3=doi(d3);
               if(tinh(tinh(m,d1,m),d2,tinh(m,d3,m))==n)
               {
                   cout<<"Co cach (("<<m<<dau1<<m<<")"<<dau2<<"("<<m<<dau3<<m<<"))="<<n<<endl;
                   ok=1;
               }

           }
    if(ok==0) cout<<"Khong co cach";

    return 0;
}
