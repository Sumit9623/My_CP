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
       int x,y,z,breaks;
       cin>>x>>y>>z;
       if(x%3==0) breaks=x/3-1;
       else breaks=x/3;
       if(breaks<0) breaks=0;
       cout<<(x*y)+(breaks*z)<<endl;
    }
    return 0;
    
}