#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tong=0;
    int dem=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
        dem++;
    }
    cout<<tong/dem;
}