#include <iostream>

using namespace std;

int main()
{
    int n,k=0;
    cin>>n;
    for(int i;i<=n;i++) k=k+i;
    while(k>=n) k--;
    cout<<k;
    return 0;
}
