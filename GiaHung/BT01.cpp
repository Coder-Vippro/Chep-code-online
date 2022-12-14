#include<iostream>

using namespace std;

int sum(int n)
{
    if (n == 1) return 1;
    return sum(n - 1) + n;
}
int main()
 {
    freopen("BT01.inp","r",stdin);
    freopen("BT01.out","w",stdout);
    int n;
    cin >> n;
     while (n <= 0);
    cout  << sum(n)<<endl;
    return 0;
}
