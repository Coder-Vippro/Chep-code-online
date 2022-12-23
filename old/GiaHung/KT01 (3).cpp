#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("KT01.inp","r",stdin)
    freopen("KT01.out","w",stdout)
    int n,s=0,a=1;
    cin>>n;
    for(int i=1;i<n;i++)
   {
    s+=i;
    if(n==s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
int numberMax(int n)
{
    if (n == 0)
        return 0;
    n = abs(n);
    int max = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n /= 10;
        if (temp > max)
            max = temp;
    }
    return max;
{
    int n;
    cin >> n;
    cout  << numberMax(n) << endl;
    return 0;
}
}
