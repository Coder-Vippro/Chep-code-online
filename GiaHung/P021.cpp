#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++)
    {
        for(int i=k;i>0;i--)
        {
            cout<<'*';
        }
        k--;
        cout<<'\n';
    }
}