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
       int n,x,flag=0;
       cin>>n>>x;
       int arr[2*n];
       for(int i=0;i<2*n;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+2*n);
       for(int i=0;i<n;i++)
       {
           if(arr[n+i]-arr[i]>=x) continue;
           else
           {
               flag=1;
               break;
           }
       }
       if(flag) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    return 0;
    
}