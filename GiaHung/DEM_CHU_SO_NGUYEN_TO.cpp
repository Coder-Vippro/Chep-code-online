#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEM_CHU_SO_NGUYEN_TO.inp","r",stdin);
    freopen("DEM_CHU_SO_NGUYEN_TO.out","w",stdout);
    int dem=0;
    string a;
    cin>>a;
    for(int i=0; i<=a.size();i++){
        if(a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='7')dem++;
        }
    cout<<dem;
    return 0;
}

