#include <bits/stdc++.h>

using namespace std;
float a;
int main()
{
    cin>>a;
    int n=1;
    float tong=1;
    while(n>=0)
    {

        for(int i=1;i<=n;i++)
        {
           tong=tong+1/i;
           if(tong<a)
           {
               n++;
           }
           else
           {
            cout<<i;
            return 0;
           }
        }


    }
    return 0;
}
