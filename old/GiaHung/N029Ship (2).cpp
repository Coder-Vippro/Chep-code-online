#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("N029Ship.inp","r",stdin);
    freopen ("N029Ship.out","w",stdout);
    char kt;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
    cin>>kt;
    if(kt=='B' || kt=='b') cout<<"BattleShip";
else if(kt=='c' || kt=='C') cout<<"Cruiser";
else if(kt=='d' || kt=='D') cout<<"Destroyer";
else  if(kt=='f' || kt=='F')cout<<"Frigate";
cout<<endl;}

    return 0;
}
