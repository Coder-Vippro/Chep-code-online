#include <bits/stdc++.h>

using namespace std;
int A[1000001];
int maxchan=-1e9;
int maxle=-1e9;
int demchan=0;
int demle=0;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]%2==0)
        {
            demchan++;
            if(A[i]>maxchan)
            {
                maxchan=A[i];
            }
        }
        if(A[i]%2==1)
        {
            demle++;
            if(A[i]>maxle)
            {
                maxle=A[i];
            }
        }

    }
    cout<<demchan<<' '<<demle<<' '<<maxle<<' '<<maxchan;
    return 0;
}
