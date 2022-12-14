#include <bits/stdc++.h>

using namespace std;
string kt(string a,string b){
    string t="",x=a,y=b;
    int al=a.size();bl=b.size;
    if(x[0]=='-')t=t+'-';
    else if(x[0]=='+')t=t+'+';
    if(y[0]=='-')t=t+'-';
    else if(y[0]=='+')t=t+'+';
    x.erase(0,1);
    y.erase(0,1);
    if(al>bl)t=t+'>';
    else if(al<bl)t=t+'<';
    else {
        bool d=1;
        for(int i=0;i<=al-1;i++){
            if(x[i]>y[i]){t=t+'>';d=0;break;}
            if(x[i]<y[i]){t=t+'<';d=0;break;}
        }
    if(d)t=t+'=';
    }
}
void chuanHoa(string &a, string &b) {
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)b.insert(0, l1-l2, '0');
    else a.insert(0, l2-l1, '0');
}
string tong(string x,string k){
    chuanHoa(x,k)
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--){
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1+cs2+nho);
        nho=cs/10;cs=cs%10;
        kq=char(cs+48)+kq;
    }
    if(nho>0) kq='1'+kq;
    return kq;
}
string hieu(string x,string k)
{string kq="";
    chuanHoa(x,k)
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1-cs2+nho);
        if(cs<0) {cs=cs+10;nho=-1;}else nho=0;
        cs=cs%10;
        kq=char(cs+48)+kq;
    }
    while(kq[0]=='0' && kq.length()>1) kq.erase(0,1);
    return kq;
}
string tinh (string a,string b){
    string g=kt(a,b),x=a,y=b;
    if(g[3]=='='&&g[1]!=g[2])return 0;
    if(g[3]=='='&&g[1]=='+'&&g[2]=='+');
    if(g[3]=='='&&g[1]=='+'&&g[2]=='-');
    if(g[3]=='>'&&g[1]=='+'&&g[2]=='-');
    if(g[3]=='>'&&g[1]=='-'&&g[2]=='+');
    if(g[3]=='>'&&g[1]=='+'&&g[2]=='+');
    if(g[3]=='>'&&g[1]=='-'&&g[2]=='-');
    if(g[3]=='<'&&g[1]=='+'&&g[2]=='-');
    if(g[3]=='<'&&g[1]=='-'&&g[2]=='+');
    if(g[3]=='<'&&g[1]=='+'&&g[2]=='+');
    if(g[3]=='<'&&g[1]=='+'&&g[2]=='-');

}
int main()
{
    //freopen("GTBT.inp","r",stdin);
    //freopen("GTBT.out","w",stdout);
    string a;
    getline(cin,a);
    cout<< a.substr(0,a.find("+"));
    return 0;
}



