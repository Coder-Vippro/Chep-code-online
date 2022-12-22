#include <bits/stdc++.h>
using namespace std;
int n,m,a[1010][1010],h[1010],l[1010],r[1010],s;
int main()
{
    cin>>m>>n;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++) cin>>a[i][j];
    h[0]=-1;h[n+1]=-1;
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++)
            h[j]=a[i][j]*(h[j]+1);
        for (int j=1;j<=n;j++) {
            l[j] = j;
            while (h[l[j]-1] >= h[j]) l[j] = l[l[j]-1];
        }
        for (int j=n;j>0;j--) {
            r[j]=j;
            while (h[r[j]+1]>=h[j])r[j]=r[r[j]+1];
        }
        for (int j=1;j<=n;j++)
            s = max(s,h[j]*(r[j]-l[j]+1));
    }
    cout<<s;
}
