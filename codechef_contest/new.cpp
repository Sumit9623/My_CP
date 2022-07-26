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
        int i,n,flag=0;
        cin>>n;
        string s,s1,s2;
        cin>>s;
        for( i=0;i<n;i++)
        {
            flag=0;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                else
                {
                    if(s[i]==s[j] && i%2!=j%2)
                    {
                        flag=1;
                    }
                }
            }
            if(!flag) continue;
            else break;
        }
        if(i==n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
    
}