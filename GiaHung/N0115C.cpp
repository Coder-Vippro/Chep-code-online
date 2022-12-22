#include <bits/stdc++.h>

using namespace std;
int GiaiThua(int num){
    int k=1, i;
    if (num==0)return k;
    else for (i = 1; i <= num; i++)k = k * i;
    return k;
}
int ChinhHop(int n) {
    return GiaiThua(n)/GiaiThua(n-2);
}
int ToHop(int k,int n) {
    return ToHop(2,n-1)+ToHop(3,n-1);
}
int main()
{
    freopen("N0811B.inp","r",stdin);
    freopen("N0811B.out","w",stdout);
    int a;
    cin>>a;
    cout<<ToHop(2,a)<<" "<<ChinhHop(a);
    return 0;
}
