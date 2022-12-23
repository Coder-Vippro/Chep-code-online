#include <iostream>

using namespace std;
long long n,x;
int A[1000001];
int main()
{
    cin>>n>>x;
    int dem =0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(A[i]+A[i+1]>x)
            {
                A[i]=A[i]-1;
                dem++;
            }
    }
    cout<<dem;
    return 0;
}
