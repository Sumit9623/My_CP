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
       int n,count=0;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       int left=0,right=0;
       for(int left=0;left<n &&right<n;left++)
       {
           if(right+arr[left]<n) 
           {
               count++;
               right=right+arr[left];
           }
           else
           {
               break;
           }
       }
       cout<<count<<endl;

    }
    return 0;
    
}