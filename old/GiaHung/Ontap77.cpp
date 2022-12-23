#include <iostream>

using namespace std;

int main()
{
    int n,m=-1;
    freopen("Ontap77.inp","r",stdin);
    freopen("Ontap77.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        int t=1,j=i+1,d=1;
        while(t<n)
        {
            t+-j;
            j++;
            d++;
        }
        if(t==n&&m<d) m=d;
    }
    if(m==-1) cout<<"INPOSSIBLE";
    else cout<<m;
    return 0;
}
