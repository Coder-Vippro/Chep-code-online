#include <bits/stdc++.h>

using namespace std;
int a,b,c,x;
int main()
{
    cin>>a>>b>>c>>x;
    int dem=0;
    for(int i=0;i<=a;i++)
        for(int j=0;j<=b;j++)
        {
            int k=x-(i*500+j*100);
            if(k%50==0 && k/50<=c && i+j+k/50 >=1 && k>=0)
                {

                    dem++;
                }
        }
        cout<<dem;
    return 0;
}
