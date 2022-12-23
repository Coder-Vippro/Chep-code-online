
#include <bits/stdc++.h>

using namespace std;
int n;
int A[10000001];
int B[10000001];
int main()
{
    freopen("Bai08.inp", "r", stdin);
    freopen("Bai08.out", "w", stdout);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            B[i] = A[i] * A[j];
    }
    sort(B + 1, B + n + 1);
    int Max = B[n];
    int dem = 0;
    for (int i=n+1;i>0;i--)
    {
        if (B[i] == Max)
            dem++;
    }
    cout << dem;
    return 0;
}


