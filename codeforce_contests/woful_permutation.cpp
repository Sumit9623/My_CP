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
        cin>>n;
        if(n%2==0)
        {
            for(int i=2;i<=n;i=i+2)
            {
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<endl;
        }
        else 
        {
            cout<<1<<" ";
            for(int i=2;i<n;i=i+2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
    
}