#include <iostream>

using namespace std;
int A[10000001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    while(cin>>A[i])
    {
        int temp=A[i];
        for(int i=1;i<=n;i++)
        if(n*i==temp*i)
               {
                   cout<<i;
                   return 0;
               }
    }
    return 0;
}
