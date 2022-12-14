#include<bits/stdc++.h>
using namespace std;
float chuvi(int a, int b, int c)
{
    return a + b + c;
}
float dientich(int a, int b, int c)
{
    float p = chuvi(a, b, c) / 2.0;
    return sqrt(p*(p - a)*(p - b)*(p - c));
}
int main()
{
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout<< dientich(a, b, c)<<endl;
    cout<<(a+b+c)/2;
    cout<<2*(a*a+b*b)-c*c/4;
    cout<<2*(c*c+b*b)-a*a/4;
    cout<<2*(a*a+c*c)-b*b/4;

    return 0;
}
