#include<bits/stdc++.h>
using namespace std;
int dem(int n)
{
    int count = 0;
    while (n != 0)
        {
        int temp = n % 10;
        if (temp % 2 == 1)
            count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int n;
    int count = 0;
    cin >> n;
    while (n < 0);
    cout << dem(n);
}
