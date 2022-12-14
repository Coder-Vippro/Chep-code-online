


#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("Bai6.inp","r",stdin);
    //freopen("Bai6.out","w",stdout);
    int n,a,b,c,a1=0,a2=0,a3=0,s=0,Min=1000000000;
    cin>>n>>a>>b>>c;
    for(int i=1;i<=n/16;i++)
        for(int j=1;j<=n/30;j++)
           for(int k=1;k<n/45;k++)
                 {
                     if(i*16+j*30+k*45<=n)
                     {
                        if(i*a+j*b+k*c<Min)
                        {
                            a1=i;
                            a2=j;
                            a3=k;
                            Min=i*a+j*b+k*c;
                        }
                     }



                 }
                 cout<<Min<<" "<<a1<<" "<<a2<<" "<<a3;
    return 0;
}
