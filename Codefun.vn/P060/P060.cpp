#include <iostream>

using namespace std;
bool ktnt (int n)
{
    if(n<2)
        return false;
    else if (n==2) return true;
    int dem =0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            dem++;
    }
    if(dem==2)
        return true;
    else return false;

}
int main()
{
    int k;
    cin>>k;
    for(int i=k;i>1;i--)
    {
        if(ktnt(i)==true)
        {
            cout<<i;
            return 0;
        }
    }

    return 0;
}