#include <iostream>

using namespace std;
int A[100001];
int n,d,x;
int main()
{
    cin>>n>>d>>x;
    int dem=n;
    int h=1;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        while(A[i]*h+1<=d)
        {
                h++;
                dem++;
        }
        h=1;
    }
    cout<<dem+x;
    return 0;
}
