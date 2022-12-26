#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) 
    {
        int kq=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I' && s[i+1]=='V')
            {
                kq=kq+4;
                i=i+1;
            }
            else if (s[i]=='I' && s[i+1]=='X')
            {
                kq=kq+9;
                i=i+1;
            }
            else if (s[i]=='X' && s[i+1]=='L')
            {
                kq=kq+40;
                i=i+1;
            }
            else if (s[i]=='X'&& s[i+1]=='C')
            {
                kq=kq+90;
                i=i+1;
            }
            else if (s[i]=='C'&& s[i+1]=='D')
            {
                kq=kq+400;
                i=i+1;
            }
            else if (s[i]=='C' && s[i+1]=='M')
            {
                kq=kq+900;
                i=i+1;
            }
            else if(s[i]=='I')kq=kq+1;
            else if(s[i]=='V')kq=kq+5;
            else if(s[i]=='X')kq=kq+10;
            else if(s[i]=='L')kq=kq+50;
            else if(s[i]=='C')kq=kq+100;
            else if(s[i]=='D')kq=kq+500;
            else if(s[i]=='M')kq=kq+1000;
        }
        return kq;
    }
    
};