#include <bits/stdc++.h>
using namespace std;
bool ktsd(int n)
{
    int dem=0,tong=0;
    while(n>0) {
        tong=tong+n%10;
        n/10;
        dem++;
    }
    if(tong%dem==0) return true;
    else return false;
}
int main()
{
    freopen("BEAUTY.INP", "r", stdin);
    freopen("BEAUTY.OUT", "w", stdout);
    int k;
    int dem=0;
    while(cin>>k){
        while(k>=0){
            if(ktsd(dem)==1)
            k--;
            else dem++;
        }
        cout<<dem<<endl;
        dem=0;
    }
    return 0;

}
