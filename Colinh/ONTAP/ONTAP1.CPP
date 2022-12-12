#include <bits/stdc++.h>
using namespace std;
int giaithua(int n)
{
    int tich=1;
    for(int i=1;i<=n;i++)
    {
        tich=tich*i;
    }
    return tich;
}
bool kt(int n)
{
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        tong=tong+i;
        if(tong==n)return true;
        if(tong>n)return false;
    }
    return false;
}
int n;
int main()
{
    freopen("ONTAP1.INP","r",stdin);
    freopen("ONTAP1.OUT","w",stdout);

}