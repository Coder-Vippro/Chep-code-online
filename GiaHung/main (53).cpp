#include <bits/stdc++.h>


using namespace std;
int n;
int main()
{
    cin>>n;
    int d=0;
    for(int i=1;i*i<=n/3;i++)
    {
        for(int j=i;j*j<=n-i*i;i++)
        {
            if(sqrt(n-1*i-j*j)>=j && sqrt(n-i*i-j*j)==n-i*i-j*j)
            {
                cout<<i<<" "<<j<<sqrt(n-i*i-j*j)<<'\n';
                d++;
            }
        }
    }
    cout<<d;
    return 0;
}
