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
        int n,incr=1,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if((arr[i]<arr[i+1]) && incr==0) flag=1;
            if(arr[i]>arr[i+1]) incr=0;
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        

    }
    return 0;
    
}