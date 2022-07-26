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
        int x,y,n,r,ans=0;
        cin>>x>>y>>n>>r;
        if(x*n>r) cout<<-1<<endl;
        else if(y*n<=r) cout<<0<<" "<<n<<endl;
        else
        {
            ans=(r-(n*x))/(y-x);
            cout<<n-ans<<" "<<ans<<endl;
        }
        
    }
    return 0;
    
}