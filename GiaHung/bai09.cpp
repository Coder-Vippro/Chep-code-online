
#include <bits/stdc++.h>

using namespace std;

int A(float a){
    int i=1;
while(a*i==int(a*i))i++;
}
float a[1001];
int main()
{    //freopen("Bai09.inp","r",stdin);
     //freopen("Bai09.out","w",stdout);
     long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>a[i];
    cout<<A(a[i])<<'\n';
    }
  return 0;
}
