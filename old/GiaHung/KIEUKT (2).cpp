#include <iostream>

using namespace std;

int main()
{
    char kt;
    cin>>kt;
    if('a'<=kt && kt <='z') cout<<'A'<=kt && kt<='Z';
    else if('A'<=kt && kt<='Z') cout<<'a'<=kt && kt<='z';
    return 0;
}
