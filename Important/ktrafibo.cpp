#include <bits/stdc++.h>
using namespace std;
int fb(int n)
{
    if(n==1||n==0||n==2||n==3) return n;
    return fb(n-2)+fb(n-1);
}
int Fibo(int n)
{
    int i=0;
    while(n>fb(i))
    {
        i++;
    }
    if(n==fb(i))return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    return 0;
}
 //test