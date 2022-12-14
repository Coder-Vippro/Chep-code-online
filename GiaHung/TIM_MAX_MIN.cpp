#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TIM_MAX_MIN.inp","r",stdin);
    freopen("TIM_MAX_MIN.out","w",stdout);
    int n;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++){cin>>a[i];s=s+a[i];}
    sort(a,a+n);
    cout<<s-a[n-1]<<" "<<s-a[0];
    return 0;
}

