
#include <iostream>
using namespace std;
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
        long long int a,b,n,ans=0;
        cin>>a>>b>>n;
        if(a%b==0) cout<<-1<<endl;
        else
        {
            ans=(ceil(float(n)/float(a)))*a;
            while(1)
            {
                if(ans%b==0) ans=ans+a;
                else break;
            }
            cout<<ans<<endl;
        }
    }
    return 0;   
}

