#include<bits/stdc++.h>
#define FOR(i, n) for(int i=1; i<=(n); i++)
using namespace std;
int n, m, a[10005]={}, l=1, r;
bool kt(int x){
    vector<int> b;
    b.resize(x+1, m);
    FOR(i, n) FOR(j, x+1){
        if(j==x+1) return 0;
        else if(b[j]>=a[i]){
            b[j]-=a[i];
            break;
        }
    }
    return 1;
}
int main(){
    freopen("BIGC.inp", "r", stdin);
    freopen("BIGC.out", "w", stdout);
    cin>>n>>m;
    r=n;
    FOR(i, n) cin>>a[i];
    sort(a+1, a+n+1, greater<int>());
    while(l<=r){
        int mid=(l+r)/2;
        if(kt(mid)) r=mid-1;
        else l=mid+1;
    }
    cout<<r+1;
}
