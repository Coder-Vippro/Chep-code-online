#include <iostream>

using namespace std;
int n;
int A[100000001];
bool ktnt(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    int dem=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
        dem++;

}
int main()
{
for(int i=1;i<=n;i++)
    cin>>A[i];

    return 0;
}
