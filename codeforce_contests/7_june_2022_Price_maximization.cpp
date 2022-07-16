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
       int n,k;
       cin>>n>>k;
       long long int arr[n],a[n],ans=0;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           a[i]=arr[i]%k;
           ans=ans+arr[i]/k;
       }
       
       sort(a,a+n);
       int head=0,tail=n-1;
       while(head<tail)
       {
           if((a[head]+a[tail])>=k) 
           {
               ans++;
               head++;
               tail--;
           }
           else head++;

       }
       cout<<ans<<endl;
    }
    return 0;
    
}