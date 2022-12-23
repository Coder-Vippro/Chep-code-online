#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Pizzas.inp","r",stdin);
    freopen("Pizzas.out","w",stdout);
    int n;
    cin>>n;
    int s=n/5,hop=s;
    while(hop>=3)
    {
        s++;
        hop=hop-2;
    }
  cout<<s;
  return 0;
}
