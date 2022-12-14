#include<iostream>
#include<math.h>
using namespace std;
int dem(int n)
{
    int d = 0;
    while (n != 0)
    {
        int temp = n % 10;
        if (temp % 2 == 1)
        d++;
        n /= 10;
    }
    return d;
}
int main()
{
    //freopen("Chusochan.inp","r",stdin)
    //freopen("Chusochan.out","w",stdout)
    long long n;
    int d = 0;
    cin >> n;
    while (n < 0);
    cout  << dem(n)<<endl;
    return 0;
}
