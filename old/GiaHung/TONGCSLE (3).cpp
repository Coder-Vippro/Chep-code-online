#include <bits/stdc++.h>

using namespace std;

int main()
{
   freopen ("TONGCSLE.inp","r",stdin);
    freopen ("TONGCSLE.out","w",stdout);
    int n;
    int sum = 0, temp;
    cin >> n;
    while (n != 0) {
        temp = n % 10;
        if (temp % 2 != 0)
            sum = sum+temp;
        n = n/10;
    }
cout<<sum;
    return 0;
}
