#include <bits/stdc++.h>

using namespace std;
string k,s;
int c,h,t;
int main()
{   freopen("bai2.inp","r",stdin);
  freopen("bai2.out","w",stdout);
int tong=0;

     cin>>s;
    for(int k=0;k<=s.length()-1;k++)
    {    c=0;t=0;h=0;
        a=s[];
        if('0'<=k[i]&&k[i]<='9') c++;
         if('a'<=k[i]&&k[i]<='z') t++;
        if('A'<=k[i]&&k[i]<='Z') h++;
        for(int j=i+1;j<=s.length();j++)
        {
            k=k+k[j];
            if('0'<=k[j]&&k[j]<='9') c++;
        if('a'<=k[j]&&k[j]<='z') t++;
         if('A'<=k[j]&&k[j]<='Z') h++;
         if(a.length()>=6&&c>0&&t>0&&h>0) tong++;
        }
    }cout<<tong;
    return 0;
}
