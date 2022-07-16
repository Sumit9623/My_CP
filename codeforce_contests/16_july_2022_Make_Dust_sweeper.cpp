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
       long long int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       long long int sum=0;
       for(int j=0;j<n-1;j++)
       {
           if(arr[j]==0 && sum==0) continue;
           else if(arr[j]==0) sum++;
           else sum=sum+arr[j];
       }
       cout<<sum<<endl;
    }
    return 0;
    
}