#include<string>
#include<iostream>
using namespace std;

string DaoNguoc(string s)
{
    int length = s.length();
    string temp;
    for (int i = length-1; i >=0; i--)
        {
        temp.push_back(s[i]);
    }
    return temp;
}

int main()
{
    //freopen("BT7.inp","r",stdin)
    //freopen("BT7.out","w",stdout)
    string s;
    cin.clear();
    getline(std::cin, s);
    cout << DaoNguoc(s);
    return 0;
}
