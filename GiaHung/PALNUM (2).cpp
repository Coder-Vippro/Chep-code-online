#include <bits/stdc++.h>
using namespace std;
int dao(int n){
   int s=0;
    while(n>0){
        s=s*10+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int s;
    cin>>s;
    while(s!=dao(s))s=s+dao(s);
   cout<<s;
    return 0;
}

