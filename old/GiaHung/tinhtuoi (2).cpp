#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tinhtuoi.inp","r",stdin);
    freopen("tinhtuoi.out","w",stdout);
    int n,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b>>c;
        if(b-c<19 || c <=0 || b<c ) cout<<"False";
        else if(b==2*c) cout<<"The current father's age is twice that of the child";
        else if(b==2*c) cout<<2*c-b<<" years ago, the father's age was twice that of the child";
            else cout<<"After "<<b-2*c<<" years, father's age will be twice child's age";
        cout<<endl;
    }
    return 0;
}
