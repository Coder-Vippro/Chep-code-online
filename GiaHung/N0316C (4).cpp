#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    //freopen("BT2.inp","r",stdin)
    //freopen("BT2.out","w",stdout)
    int n;
    cin >> n;
    cout << Fibonacci(n);
    return 0;
}
