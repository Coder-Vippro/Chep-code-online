#include<bits/stdc++.h>

using namespace std;

int nguyento(int n)
{
 if (n < 2) return 0;
 for (int i = 2; i*i<=n;i++)
 if (n%i == 0)
  return 0;
 return 1;
}
int Mersenne(int n)
{
 int i = 0;
 n += 1;

 while (n > pow(2, i))
 {
  i++;
 }
 if (n == pow(2, i))
  return 1;
 else return 0;
}
int main()
{
   freopen("TINH03.inp","r",stdin);
   freopen("TINH03.out","w",stdout);
  int n;
  cin>>n;
  cout<<Mersenne(nguyento(n));
  return 0;
}
