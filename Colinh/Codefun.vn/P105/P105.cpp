#include <bits/stdc++.h>
using namespace std;
bool kt(int n) 
{ 
    return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)); 
} 
int main()
{
    int n;
    cin>>n;
    if(kt(n)==true)
    cout<<1;
    else cout<<0;

}