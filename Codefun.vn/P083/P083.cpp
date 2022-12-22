#include <iostream>
using namespace std;
int A[100001];
int main()
{
    int n;
    cin>>n;
    long long tong=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        tong=tong+A[i]*i;
    }
    cout<<tong;
}