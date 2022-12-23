#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("Xoa_chuoi.inp","r",stdin);
    freopen("Xoa_chuoi.out","w",stdout);
    string s;cin>>s;
    int a=s.find("ucode");
    while(a!=-1){
        s.erase(a,5);
        a=s.find("ucode");
    }
    cout<<s.size();
    return 0;
}
