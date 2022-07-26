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
       long long int m,n,diff=0,ans1=0,ans2=0;
       cin>>n>>m;
       for(int gcd=n;gcd<=m;gcd++)
       {
           if(diff<(((m/gcd)*gcd)-gcd)) 
           {
               ans1=gcd;
               ans2=(m/gcd)*gcd;
           }
       }
       cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
    
}