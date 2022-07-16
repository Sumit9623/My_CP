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
       int x,y;
       cin>>x>>y;
       if(y%x==0)
       {
           cout<<1<<" "<<y/x<<endl;
       }
       else cout<<0<<" "<<0<<endl;
    }
    return 0;
    
}