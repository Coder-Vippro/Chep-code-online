#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n);
    return 0;
}