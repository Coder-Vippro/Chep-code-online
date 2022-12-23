#include <bits/stdc++.h>

using namespace std;
int A[1000000];
int n;
int main()
{
    cin>>n;

for(int i=1;i<=n;i++)
{
    cin>>A[i];

}
sort(A+1, A+n+1);
if(n%2!=0)
{
    cout<<A[n/2+1];
}
else
{
    int t=(A[n/2]+A[n/2+1]);
    cout<<t/2;
    if(t%2!=0)
    {
        cout<<".5";
    }

}

    return 0;
}
