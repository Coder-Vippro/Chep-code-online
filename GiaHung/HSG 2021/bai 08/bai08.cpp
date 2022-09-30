#include <iostream>

using namespace std;
int A[100000001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
        cin>>A[i];
        int dem=0;
    int Max=A[1]*A[2];
    for(int i=1;i<=n;i++)
        for(int j=2;j<=n;j++)
        if(A[i]*A[j]>Max)
        {
            dem++;
            Max=A[i]*A[j];
        }
        cout<<dem;
    return 0;
}
