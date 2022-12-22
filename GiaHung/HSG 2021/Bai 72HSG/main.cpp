#include <iostream>

using namespace std;
int n,m;
int tu(int n)
{
    int M=0;
    for(int i=1; i*i<=n;i++)
    {
        if(n%i==0){M+=i;if(i!=n/i)M+=n/i;}
    }
    return M;
}
int main()
{
    cin>>n>>m;
    if(tu(n)==tu(m))cout<<"CO";
    else cout<<"KHONG";
    return 0;
}
