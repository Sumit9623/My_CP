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
       int n,k,ans=INT_MAX;
       string s;
       cin>>n>>k;
       cin>>s;
       long long int head=0, tail=k-1;
        int black=0;
       for(int i=0;i<k;i++)
       {
           if(s[i]=='B') black++;
       }
       ans=min(ans,k-black);
    //    cout<<ans<<endl;
       for(int head=1;head<=(n-k);head++)
       {
           tail++;
           if(s[head-1]=='B') black--;
           if(s[tail]=='B') black++;
           ans=min(ans,k-black);
        //    cout<<"black  "<<black<<"  ans  "<<ans<<endl;
       }
       cout<<ans<<endl;
    }
    return 0;
    
}