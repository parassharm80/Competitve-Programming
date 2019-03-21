class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int ans=0;
        int i=0;
        if(s[0]=='I')
            ans=1;
        else if(s[0]=='V')
            ans=5;
        else if(s[0]=='X')
            ans=10;
        else if(s[0]=='L')
            ans=50;
        else if(s[0]=='C')
            ans=100;
        else if(s[0]=='D')
            ans=500;
        else if(s[0]=='M')
            ans=1000;
        int tmp=0,tmp1=0;
        if(n>=2)
        {
        for(i=1;i<n;i++)
        {
        if(s[i]=='I')
            tmp=1;
        else if(s[i]=='V')
            tmp=5;
        else if(s[i]=='X')
            tmp=10;
        else if(s[i]=='L')
            tmp=50;
        else if(s[i]=='C')
            tmp=100;
        else if(s[i]=='D')
            tmp=500;
        else if(s[i]=='M')
            tmp=1000;
        if(s[i-1]=='I')
            tmp1=1;
        else if(s[i-1]=='V')
            tmp1=5;
        else if(s[i-1]=='X')
            tmp1=10;
        else if(s[i-1]=='L')
            tmp1=50;
        else if(s[i-1]=='C')
            tmp1=100;
        else if(s[i-1]=='D')
            tmp1=500;
        else if(s[i-1]=='M')
            tmp1=1000;
        if(tmp>tmp1)
        {
            ans+=tmp;
            ans-=tmp1;
            ans-=tmp1;
        }
          else
            ans+=tmp;
        }
        }
    return ans;
    }
};
