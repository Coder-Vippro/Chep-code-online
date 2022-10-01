#include <iostream>

using namespace std;
int A[100001];
void taomang(int y)
{
    for(int i=1;i<=y;i++)
    {
        A[i]=i;
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    taomang(y);
    int dem=0;
    for(int i=1;i<=y;i++)
    {
        if(A[i+1]%A[i]==0 && A[i+1]>A[i] && A[i]>=x && A[i]<=y)
            dem++;
    }
    cout<<dem;
    return 0;
}
