#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("xau29.inp","r",stdin);
	//freopen("xau29.out","w",stdout);
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    int c=0;
    string s;
    int sa=a.size(),sb=b.size();
    if(sa>sb)c=1;
    else if(sa<sb)c=-1;
    else {
        for(int i=0;i<=sa;i++){
          if(a[i]>b[i]){c=1;break;}
    else if(a[i]<b[i]){c=1;break;}
        }
    }
    if(c=0)s="0";
    else if(c=1){
        for(int i=sa-1;i>=0;i--){
            int j=sb-1;
            if(a[i]>=b[j])s=s+char(a[i]-b[j]+48);
            else{
               s=s+char(a[i]-b[j]+58);
                b[j-1]++;
            }
        }
    }
    else if(c=-1){
            s=s+'-';
        for(int i=sb-1;i>=0;i--){
            int j=sb-1;
            if(b[i]>=a[j])s=s+char(b[i]-a[j]+48);
            else{
                s=s+char(b[i]-a[j]+58);
                a[j-1]++;
            }
        }
    }
    for(int i=s.size()-1;i>=0;i--)cout<<s[i];
    return 0;

}
