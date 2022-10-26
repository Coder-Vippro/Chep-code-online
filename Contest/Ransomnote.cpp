class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int k;
        if(ransomNote.size()>magazine.size())
        k=ransomNote.size();
        else k=magazine.size();
        for(int i=1;i<=k;i++)
        {
            if(ransomNote[i]==ransomNote[i-1])ransomNote.erase(i-1);
            if(magazine[i]==magazine[i-1])magazine.erase(i-1);
        }
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        if(magazine==ransomNote)return true;
        else return false;
    }
};