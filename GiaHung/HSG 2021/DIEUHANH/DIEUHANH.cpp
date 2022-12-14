#include <bits/stdc++.h>
using namespace std;
long long n,a[30001],a1[30001],luu[30001],d=1,j=1;
long long Tim(long long a[], long long n, long long x){
	for(long long i=0; i<n; i++)if(a[i] == x)return i;
}
void Xoa(long long a[], long long &n, long long x)
{
	long long vt=Tim(a, n, x);
	for(long long i=vt; i<=n-2; i++)a[i] = a[i+1];n--;
}
int main()
{
 //freopen("DIEUHANH.inp","r",stdin);
 //freopen("DIEUHANH.out","w",stdout);
 cin>>n;
 d=n;
 for(long long i=1;i<=n;i++){cin>>a[i];a1[i]=a[i];}
 sort(a1,a1+n+1);
 for(long long i=1;i<=n;i++){
   if(a[i]==a1[j]){j++;}
   else {luu[d]=i;d++;Xoa(a1,n,a[i]);}
 }
 cout<<j+1<<'\n';
 for(long long i=1;i<=d;i++)if(luu[i]!=0)cout<<luu[i]<<" ";
 return 0;
}
