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
        int n,flag=0;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        for(int i=1;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%arr[0]!=0) flag=1;
        }
        if(!flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}