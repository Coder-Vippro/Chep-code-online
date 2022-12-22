#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long dem=0;
    for(long long i=1;i<=s.size()-1;i++)
    {
        if((s[i]-32)%2==0)
            dem++;
    }
    cout<<dem;
    return 0;
}
