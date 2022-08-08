#include <bits/stdc++.h>
using namespace std;
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int left=101,right=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='?' && i<left) left=i;
            if(s[i]!='?' && i>right) right=i;
        }
        if(left==101 || right==-1) 
        {
            s[0]='R';
            for(int i=1;i<n;i++)
            {
                if(s[i-1]=='R') s[i]='B';
                else s[i]='R';
            }
        }
        else
        {
            for(int i=left-1;i>=0;i--)
            {
                if(s[i+1]=='R') s[i]='B';
                else s[i]='R';
            }
            for(int i=right+1;i<n;i++)
            {
                if(s[i-1]=='R') s[i]='B';
                else s[i]='R';
            }
            for(int i=1;i<n;i++)
            {
                if(s[i]=='?')
                {
                     if(s[i-1]=='R') s[i]='B';
                    else s[i]='R';

                }
            }
        }
        cout<<s<<endl;

    }
    return 0;
    
}