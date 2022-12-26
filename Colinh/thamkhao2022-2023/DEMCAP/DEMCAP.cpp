#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[100001];
int n,k;
int nho=0;
int dem=0;
int main()
{
    freopen("DEMCAP.INP","r",stdin);
    freopen("DEMCAP.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i]+A[j]==k && i!=j && i>j)
            dem++;
            
        }
    }
    cout<<dem;
    //su dung chat nhi phan
    //sap xep mang gom n so nguyen tung doi mot khac nhau the thu tu tang dan
    //cho i chay tu 1 den n-1 ta thuc hien 2 cong viec
    //gan gtri dau laf i+1 va gtri cuoi la n
    // su dung chat nhi phan tu vtri i+1 den n de lay gia ti a giua + a[i]
    //Th1: neu a giua + a[i]==x thi tang bien dem len 1 va dung luon vong lap i+1 den n
    //Th2: neu a giua + a[i]>x thi cuoi = giua -1
    //Th3: neu a giua + a[i]<x thi dau = giua +1
    //ket qua tim dc laf bien dem
}