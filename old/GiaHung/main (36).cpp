#include <iostream>

using namespace std;

bool KTSNT(int x)
{
    if (x < 2)
        {
        return false;
    }
    if (x == 2)
        {
        return true;
    }
    if (x % 2 == 0)
        {
        return false;
    }
    for (int i = 3; i < (x - 1); i += 2)
        {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n,s=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    if (i<10)
    s=s+i;
    else
    s=s+(i%10)+(i/10);
    cout<<s;
    return 0;
}
