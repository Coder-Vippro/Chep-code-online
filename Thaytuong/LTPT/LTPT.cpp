
#include <iostream>
using namespace std;
long long x;
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>x;
    for(long long i=n;i<=y;i++)
    {
        if(x%i==0)
        dem++;
    }
    if(dem%2==0)cout<<0;
    else cout<<1;
    
    
}