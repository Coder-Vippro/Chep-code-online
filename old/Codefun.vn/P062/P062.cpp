#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n){
    if (n == 1 || n == 2)return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int A[31];
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=30;i++) A[i]=Fibonacci(i);
   for(int i=30;i>0;i--)if(A[i]<=n){
        cout<<A[i];
        return 0;
   }
    }
   }
}
