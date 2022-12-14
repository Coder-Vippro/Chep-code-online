#include <iostream>

using namespace std;

int main()
{
    int s[5];
    int max;
    for (int i = 1; i <= 5; i++)
        cin >> s[i];
    s[0] = max;
    for (int i = 1; i < 5; i++)
    {
        if (s[0] > s[i])
        {
            s[0] = max;
        }
        else
        {
            s[i] = max;
        }
    }
    cout << max <<endl;

}
