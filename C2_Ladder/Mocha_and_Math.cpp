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
       long long int arr[n],ans;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       ans = arr[0];
       for(int i=1;i<n;i++)
       {
           ans&=arr[i];
       }
       cout<<ans<<endl;
    }
    return 0;
    
}