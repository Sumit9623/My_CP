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
       for(int i=0;i<=(n-k);i++)
       {
           int black=0;
        //    cout<<"Outer for"<<endl;
           for(int j=i;j<(k+i);j++)
           {
            //    cout<<"Inner for"<<endl;
               if(s[j]=='B') black++;
           }
           cout<<black<<endl;
           ans=min(ans,k-black);
       }
       cout<<ans<<endl;
    }
    return 0;
    
}