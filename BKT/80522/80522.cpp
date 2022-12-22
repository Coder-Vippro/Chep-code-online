    #include <bits/stdc++.h>
    using namespace std;
    bool ktcs(char c)
    {
        if(c>='0' && c<='9')
        return true;
        else return false;
    }
    string s;
    int main()
    {
        freopen("80522.INP","r",stdin);
        freopen("80522.OUT","w",stdout);
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        long long k=0;
        long long maxx=0;
        long long minn=pow(10,9);
        cin>>s;
        if(ktcs(s[0])==true)
        {
            s.erase(s.begin()+0);
        }
        for(int i=0;i<s.size();i++)
        {
            if(ktcs(s[i])==false && ktcs(s[i+1])==true && s[i+1]=='0')
            s.erase(s.begin()+i+1);
        }
        for(int i=0;i<s.size();i++)
        {
            if(ktcs(s[i])==true)
            {
                k=(k+(s[i]-48))*10;
            }
            else if(ktcs(s[i])==false)
            {
                k=k/10;
                if(k>maxx && k!=0)
                maxx=k;
                if(k<minn && k!=0)
                minn=k;
                k=0;
            }
        }   
        cout<<minn<<endl;
        cout<<maxx; 
    }