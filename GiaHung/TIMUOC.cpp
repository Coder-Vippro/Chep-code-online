#include <iostream>
using namespace std;

int main()
{
    freopen("TIMUOC.inp","r",stdin);
    freopen("TIMUOC.out","w",stdout);
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(n % i == 0)
        {
            cout <<'\n'<< i;
        }
    }
    return 0;
}
