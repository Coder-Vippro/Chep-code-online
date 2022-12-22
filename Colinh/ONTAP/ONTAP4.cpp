#include<iostream>
using namespace std;
int tohop(int k, int n) 
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return tohop(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    freopen("ONTAP4.INP","r",stdin);
    freopen("ONTAP4.OUT","w",stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        for (int j = n; j > i; j--)
        cout<<" ";
        for (int j = 0; j <= i; j++) 
        {
            cout<<tohop(j, i)<< " ";
        }
        cout<<endl;
    }
    return 0;
}