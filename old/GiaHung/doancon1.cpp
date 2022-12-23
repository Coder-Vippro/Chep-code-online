#include <bits/stdc++.h>

using namespace std;
int a[1000001];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int best=1, cnt=1;
    for(int i=2;i<=n;i++)
        if(a[i]>a[i-1])
    {
        cnt++;
        if(cnt>best) best = cnt;
    }
    else
        cnt=1;
    cout<<best;
    return 0;
}
