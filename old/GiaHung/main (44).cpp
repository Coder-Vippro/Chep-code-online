#include <stdio.h>
#include <iostream>
using namespace std;

long ucln(long a, long b)
{
    long r;
    while (a%b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int main()
{
    long a, b;
    cin >> a >> b;
    cout <<ucln(a,b)<<endl;
    return 0;
}
