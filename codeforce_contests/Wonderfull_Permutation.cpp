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
        int n,k,temp,count=0;
        cin>>n>>k;
        map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            mp[temp]=i+1;
        }
        for(int i=1;i<=k;i++)
        {
            if(mp[i]>k) count++;
        }
        cout<<count<<endl;

    }
    return 0;
    
}