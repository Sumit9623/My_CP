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
        long long int n;
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<1<<endl;
    }
    return 0;
    
}