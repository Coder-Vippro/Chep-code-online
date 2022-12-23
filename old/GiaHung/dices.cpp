#include <iostream>

using namespace std;

int main()
{
    int m,n,s=0;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    if(i+i%10==0) cout<<s++;
    return 0;
}
