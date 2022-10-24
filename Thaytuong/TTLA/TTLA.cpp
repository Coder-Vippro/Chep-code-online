#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TTLA.INP","r",stdin);
    freopen("TTLA.OUT","w",stdout);
    int n;
    cin>>n;
    cout<<n<<' ';
    while(n!=1)
    {
        
        if(n%2==1)
        {
            n=n*3+1;
        }
        else {n=n/2;}
        cout<<n<<' ';
    }
    return 0;

}