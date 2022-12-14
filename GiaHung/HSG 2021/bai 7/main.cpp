#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+i;
        if(s==n)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
