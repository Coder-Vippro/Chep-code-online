/*#include <bits/stdc++.h>

using namespace std;
int a[10001];
int n;
int x;
int d=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==x)d++;\
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;\
int a[10001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=a[i-1])
        {
            cout<<a[i];
            break;
        }
    }
    for(int i=n;i>0;i--)
    {
        if(a[i]!=a[i-1])
        {cout<<a[i-1];break;}
    }

}
