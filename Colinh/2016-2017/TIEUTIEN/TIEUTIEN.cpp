#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
/*int a,b,c;
int main()
{
    freopen("TIEUTIEN.INP","r",stdin);
    freopen("TIEUTIEN.OUT","w",stdout);
    cin>>a>>b>>c;
    for(int i=c/a;i>=0;i--)
    {
        for(int j=0;j<=c/b;j++)
        if(i*a+j*b==c)
        {
            cout<<i+j<<endl;
            return 0;
        }
    }
    
}*/
int a,b,c;
int main()
{
    freopen("TIEUTIEN.INP","r",stdin);
    freopen("TIEUTIEN.OUT","w",stdout);
    cin>>a>>b>>c;
    if(a<b)swap(a,b);
    if(c%a==0)cout<<c/a;
    else 
    {
        int sl=c/a;
        while (sl>=0)
        {
            if(c-(a*sl)%b==0)cout<<sl+c-(a*sl)/b;
            else {sl--;return 0;}
        }
        cout<<-1;
        return 0;   
    }
}