#include <bits/stdc++.h>
using namespace std;
int xausangso(char c)
{
    return c - '0';
}
char sosangxau(int n)
{
    return (char)(n+48);
}
void chuanHoa(string &a, string &b)
{
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)b.insert(0, l1-l2, '0');

}
string sum(string a, string b)
{
    string s = "";
    chuanHoa(a,b);
    int l = a.length();
    int temp = 0;
    for (int i=l-1; i>=0; i--){
        temp = xausangso(a[i]) + xausangso(b[i]) + temp;
        s.insert(0,1,sosangxau(temp%10));
        temp = temp/10;
    }
    if (temp>0)s.insert(0,1,sosangxau(temp));
    return s;
}
 string tamgiacpascal[202][202];
int main()
{
   freopen("TAMGIAC_PASCAL.inp","r",stdin);
   freopen("TAMGIAC_PASCAL.out","w",stdout);
   int n;cin>>n;
   for(int i=0;i<=n+1;i++)
    for(int j=0;j<=n+1;j++) tamgiacpascal[i][j]="0";
    tamgiacpascal[1][1]="1";
   for(int i=2;i<=n+1;i++)
      {
       for(int j=1;j<=n+1;j++)
   {
    tamgiacpascal[i][j]=sum(tamgiacpascal[i-1][j],tamgiacpascal[i-1][j-1]);
   }
      }
   for(int j=1;j<=n+1;j++)
   {
    cout<<tamgiacpascal[n+1][j]<<'\n';
   }
    return 0;
}
