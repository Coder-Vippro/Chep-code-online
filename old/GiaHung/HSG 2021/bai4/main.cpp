#include <iostream>

using namespace std;
bool ktsd(int n,int k=0)
{
    for(int i=1;i<=n;i++)
    {
    k=k+i;
    if(k==n)
    {
        return true;
    }
    else return false;
    }

}

int main()
{
    int n;
    cin>>n;
    int dem=0;

    for(int i=1;i<=n;i++)
    {
        if(ktsd(i)==true)
            dem++;
    }

    cout<<dem;
    return 0;
}
