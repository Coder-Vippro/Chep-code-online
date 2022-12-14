#include <bits/stdc++.h>
using namespace std;
bool ktem(string a){
    if(a[0]=='.'|| a[a.size()-1]=='.')return 0;
    int dem1=0,dem2=0;
    for(unsigned int i=0;i<a.size();i++){
        if(a[i]==' '||a[i]==96||a[i]==91||a[i]==92||a[i]==93||a[i]==94||a[i]>=123||(a[i]>=20 && a[i]<=45)||(a[i]>=58 && a[i]<=63)||a[i]==47)return 0;
        if(a[i]=='.')dem1++;
        if(a[i]=='@')dem2++;
        if(dem2==0&&a[i]=='.')return 0;
    }
    if(dem1>=1 && dem2==1)return 1;
    else return 0;
}
string a;
int main()
{
    freopen("EMAIL.INP","r",stdin);
    freopen("EMAIL.OUT","w",stdout);
    while(getline(cin,a))
    {
        if(ktem(a))cout<<"TRUE"<<'\n';
    else cout<<"FALSE"<<'\n';
    }
    return 0;
}
