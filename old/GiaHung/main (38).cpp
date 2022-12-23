#include<iostream>
using namespace std;
int main()
{
    int i, n, max;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if((n % i == 0) && (i % 2 == 1))
        {
            if(i > max)
            {
            max = i;
            }
        }
            i++;
    }
    cout<<max;
    return 0;
}
