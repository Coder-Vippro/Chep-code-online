#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("THAO_TAC_AB1.inp","r",stdin);
    freopen("THAO_TAC_AB1.out","w",stdout);
    int a, b;
    cin >> a >> b;
    int k=1, Max = max(a, b),Min = min(a, b),count = 0;
    while (Min + k < Max){
        count++;
        Min += k;
        k++;
    }
    int disTren = Min + k - Max,disDuoi = Max - Min,mindis = min(disTren, disDuoi);
    if (disTren < disDuoi)count++;
    count += mindis * 2;
    cout<<count;
}
