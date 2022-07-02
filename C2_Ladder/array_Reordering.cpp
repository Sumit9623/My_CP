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
        long long int count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]%2==0 || arr[j]%2==0)
                {
                    count++;
                }
                else if(__gcd(arr[i],arr[j])!=1) count++;
                else continue;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
    
}