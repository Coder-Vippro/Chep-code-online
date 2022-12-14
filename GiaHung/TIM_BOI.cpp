#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("TIM_BOI.inp","r",stdin);
    freopen ("Tim_boi.out","w",stdout);
    int a,b,k,d=0;
    cin>>a>>b>>k;
    for(int i=a;i<=b;i++)if(i%k==0){
                cout<<i;
                d++;
                break;
        }
        if(d==0)cout<<-1;
    return 0;
}
