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
        unsigned long long int ans=0;
        int n,zc=0,oc=0;
        cin>>n;
        int temp=0;
        while(n--)
        {
            cin>>temp;
            if(temp==0) zc++;
            if(temp==1) oc++;
        }
        ans=(long long)1<<zc;
        cout<<fixed<<ans*oc<<endl;
    }
    return 0;
    
}