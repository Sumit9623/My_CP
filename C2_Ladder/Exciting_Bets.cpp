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
        long long int a,b;
        cin>>a>>b;
        if(a>=b) cout<<a-b<<" ";
        else cout<<b-a<<" ";
     
    }
    return 0;
    
}