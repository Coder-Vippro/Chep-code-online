#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TINH_DIEU_KIEN.inp","r",stdin);
    freopen("TINH_DIEU_KIEN.out","w",stdout);
    int a,c=0;
    cin>>a;
    for(int i=1;i<=a;i++){
        int b;
        cin>>b;
        if(b>0) c=c+b;
        else c=c+0;
    }
    cout<<c;
    return 0;
}
