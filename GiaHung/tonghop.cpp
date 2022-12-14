#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tonghop.inp","r",stdin);
    freopen("tonghop.out","w",stdout);
    int n,hc,hdv,sodao;
    cin>>n;
    cout<<"Cau a:"<<endl;
    cout<<"So vua nhap la:"<<n<<endl;

    hc=n/10;//Chia lay nguyen
    hdv=n%10;//Chia lay du
    cout<<"Cau b:"<<endl;
    cout<<"Chu so hang chuc la:"<<hc<<endl;
    cout<<"Chu so hang don vi la:"<<hdv<<endl;

    cout<<"Cau c:"<<endl;
    cout<<"Tong chu so hang chuc va hang don vi la:"<<hc+hdv<<endl;

    cout<<"Cau d:"<<endl;
    if(n%2==0) cout<<n<<" la so chan"<<endl;
     else cout<<n<<" la so le"<<endl;

    cout<<"Cau e:"<<endl;
    for(int i=1;i<=n;i++) cout<<i<<" ";

    cout<<endl<<"Cau f:"<<endl;
    if(n%2==0)
        for(int i=0;i<=n;i=i+2) cout<<i<<" ";
    else
        for(int i=1;i<=n;i=i+2) cout<<i<<" ";

    cout<<endl<<"Cau g:"<<endl;
    sodao=hdv*10+hc;
    if(sodao<n)
        for(int i=sodao;i<=n;i++) cout<<i<<" ";
    else
        for(int i=n;i<=sodao;i=i+1) cout<<i<<" ";
    return 0;
}
