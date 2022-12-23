#include <bits/stdc++.h>

using namespace std;
bool kt(long long x1,long long x2,long long y1,long long y2){
if(x1==x2 || y1==y2)return 1;
return 0;
}
int main()
{
    freopen("TOA_DO2.inp","r",stdin);
    freopen("TOA_DO2.out","w",stdout);
    int x1,y1,x2,y2,n;
    cin>>n;
    cin>>x1>>y1;
    for(int i=1;i<n;i++){
       cin>>x2>>y2;
       if(kt(x1,x2,y1,y2)==0){cout<<"NO";return 0;}
       x1=x2;y1=y2;
    }
    cout<<"YES";
    return 0;
}
