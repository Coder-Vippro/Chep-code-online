#include <bits/stdc++.h>

using namespace std;

double a[100001];

int main()
{
    freopen("DIEMTB.inp","r",stdin);
    freopen("DIEMTB.out","w",stdout);
    int n,kq=0;
    cin>>n;
    double tb=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        tb+=a[i];
    }
    tb/=n;
    for (int i=0;i<n;i++) {
        if (a[i]>=tb) {
            kq++;
        }
    }
    cout << kq;
    return 0;
}
