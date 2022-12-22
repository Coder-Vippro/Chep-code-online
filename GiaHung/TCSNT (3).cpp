#include<bits/stdc++.h>

using namespace std;
int soNT(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}
int main()
{
    freopen("TCSNT.inp","r",stdin);
    freopen("TCSNT.out","w",stdout);
    int j,n;
    int t=0;
    cin >> n;
    for(int i=2;i<=n;i++){
        if(soNT(i)){
            j=i;
            while(j>0){
                t=t+j%10;
                j=j/10;
            }
        }
    }
    cout<< t;
    return 0;
}
