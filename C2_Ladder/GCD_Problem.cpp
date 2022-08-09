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
            cout<<(n/2)<<" "<<(n/2)-1<<" "<<1<<endl;
        }
        else
        {
            if((n/2)%2==0) cout<<(n/2)+1<<" "<<(n/2)-1<<" "<<1<<endl;
            else cout<<(n/2)+2<<" "<<(n/2)-2<<" "<<1<<endl;
        }
    }
    return 0;
    
}