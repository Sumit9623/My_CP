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
        long long int n;
        cin>>n;
        long long int arr1[n];
        long long int arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            arr2[i]=arr1[i];
        }
        sort(arr2,arr2+n);
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(arr2[j]==arr1[i]) j++;
        }
        for(int i=0;i<n;i++)
        {
            if(arr2[j]==arr1[i]) j++;
        }
        if(j==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}