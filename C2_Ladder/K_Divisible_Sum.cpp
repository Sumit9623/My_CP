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
         int n,k,ans;
        cin>>n>>k;
        int p;
        if(n>k)
        {
            p=n/k;
            if(n%k!=0) p++;
            k=p*k;
        }
        ans=k/n;
        if(k%n!=0) ans++;
        cout<<ans<<endl;
    }
    return 0;   
}