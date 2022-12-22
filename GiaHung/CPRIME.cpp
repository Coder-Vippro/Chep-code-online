#include<bits/stdc++.h>
using namespace std;
bool ktnt(int n) // kiem tra nguyen to
{
    if(n==2)
    return true;
    if(n<2) return false;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        dem++;
    }
    if(dem==2)
    return true;
    else return false;
}
/* 
bool snt(int k) //dao nguoc va kiem tra dieu kien de bai
{
    int sdn=k%10;
    int n=k;
    k=k/10;
    while(k>0)
    {
       sdn=sdn*10+k%10;
       k=k/10;
    }
    if(ktnt(n)==true&&ktnt(sdn)==true)
    return true;
    else return false;
}
*/

int n;
int main()
{
    freopen("CPRIME.INP","r",stdin);
    freopen("CPRIME.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(snt(n)==true)
    {
        cout<<1;
    }
    else cout<<0;
}