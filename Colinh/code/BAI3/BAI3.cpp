#include <bits/stdc++.h>

using namespace std;
int A[100001];
int n;
int x;
int vt=0;
int main()
{
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]==x)
        {
            vt=i;
        }
    }
    if(vt!=0)
    {
        cout<<vt;
    }
    else cout<<"NO SOLUTION";
    return 0;
}
