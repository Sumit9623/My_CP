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
        long long int x,n;
        cin>>x>>n;
        if(x%2==0)
        {
            if(n%4==0) cout<<x<<endl;
            else if((n-1)%4==0) cout<<x-n<<endl;
            else if((n-2)%4==0) cout<<x+1<<endl;
            else cout<<x+n+1<<endl;
        }
        else
        {
            if(n%4==0) cout<<x<<endl;
            else if((n-1)%4==0) cout<<x+n<<endl;
            else if((n-2)%4==0) cout<<x-1<<endl;
            else cout<<x-n-1<<endl;
        }
    }
    return 0;
    
}