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
       string s;
       cin>>s;
       int ans=0;
       ans=ans+(s[0]-'a')*25;
       if(s[1]>s[0]) ans=ans+(s[1]-96)-1;
       else ans=ans+(s[1]-96);
       cout<<ans<<endl;
    }
    return 0;
    
}