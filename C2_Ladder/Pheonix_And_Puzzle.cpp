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
        int x;
        cin>>x;
        int p=3,q=5;
        if(x==1) cout<<"NO"<<endl;
        else
        {
            if(x%2==0) p=x/2;
            if(x%4==0) q=x/4;
            if(sqrt(p)*sqrt(p)==p || sqrt(q)*sqrt(q)==q) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
    
}