
// 12 July 2022   codeforces round 806 (div 4)
// Problem D : ICPC Balloons
// link : https://codeforces.com/contest/1703/problem/B

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
       int n,ans=2;
       string s;
       cin>>n;;
       cin>>s;
       sort(s.begin(),s.end());
       if(s.size()==1) ans=2;
       else
       {
            for(int i=1;i<s.size();i++)
            {
                if(s[i]==s[i-1]) ans=ans+1;
                else ans=ans+2;
            }
       }
       cout<<ans<<endl;
    }
    return 0;
    
}