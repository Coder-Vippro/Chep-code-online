#include <bits/stdc++.h>

using namespace std;

int main()
{
int a,b;
cin>>a>>b;
char A[100][100];
int dem=0;
for(int i=1;i<=a;i++)
    for(int j=1;j<=b;j++)
{
       cin>>A[i][j];
       if(A[i][j]=='1'&& A[i][j-1]=='0')
       dem++;
}
 cout<<dem;
    return 0;
}
