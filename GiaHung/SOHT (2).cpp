#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

using namespace std;

int tonguoc(int x)
{
    int sum=0;
    for(int i=1;i*i<=x;i++)
        if(x%i==0)
    {
        sum=sum+i;
        if(i!=x/i) sum=sum-x/i;
    }
    return sum;
}
int main()
{
    long long n;
    cin>>n;cout<<tonguoc(n);
    if(n%tonguoc(n)==0)
    {
        cout<<"Co";
    }
    else
    {
        cout<<"Khong";
    }
    return 0;
}
