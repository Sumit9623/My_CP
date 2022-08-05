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
        int flag=0;
        cin>>n;
        int c2021=n%2020;
        int c2020= (n-2021*c2021)/2020;
        if(c2020>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}