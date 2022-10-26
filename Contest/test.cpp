#include <bits/stdc++.h>
using namespace std;
string ransomNote, magazine;
int main()
{
    cin>>ransomNote>>magazine;
    int k;
        if(ransomNote.size()>magazine.size())
        k=ransomNote.size();
        else k=magazine.size();
    for(int i=0;i<k;i++)
        {
            if(ransomNote[i]==ransomNote[i+1]){ransomNote.erase(i+1);}
            if(magazine[i]==magazine[i+1]){magazine.erase(i+1);}
        }
        cout<<magazine<<' '<<ransomNote;
        return 0;

}