//tong cac cs la s va so luong cs = d
//ta co
//s>d*9 khong tao dc
//s=d*9 kq=9..... gom d cs 9
//Th khac: s<d*9
//B1: khoi tao x=0
//B2: tao cs c=s-9*(d-1)
//B3: neu x=0 thi c=max(1,c) va nguoc lai thi quay lai buoc 2 voi x=x*10+c, s=s-c, d=d-1
//B4: neu d==0 thi x la kq va dung
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,s,d,k;
int x;
int tcs(int n)
{
    int tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
    }
    return tong;
}
int main()
{
    freopen("SNN.INP","r",stdin);
    freopen("SNN.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>k>>d;
        if(tcs(k)>d*9)
        {
            cout<<-1<<'\n';
        }
        if(tcs(k)==d*9)
        {
            for(int i=1;i<=k;i++)
            {
                cout<<9;
            }
            cout<<'\n';
        }
        else 
        {
            int c=s-9*(d-1);
            x=0;
            if(x==0)
            {
                c=max(1,c);
            }
            else
            {
                x=x*10+c;
                s=s-c;
                d=d-1;
            }
        }
        if(d==0)
        {
            cout<<x<<' ';
        }
    }
    
}