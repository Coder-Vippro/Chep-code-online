#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ONTAP1.INP", "r" ,stdin);
    freopen("ONTAP1.OUT", "w" ,stdout);
     string s;
     long long k;
     while(cin>>k)
     {
         long long i,n,t;
         getline(cin,s);
         getline(cin,s);
         n=s.size();
         for(i=0; i<n; i++)
         {
             if(s[i]!=32)
             {
                 t=s[i]-k;
                 if(t<65) s[i]=char(t+26);
                 else s[i]=char(t);
             }
         }
         cout<<s<<endl;
     }
    return 0;
}
