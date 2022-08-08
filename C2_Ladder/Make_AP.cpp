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
        int flag=0;
        long long int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        long long int diff;
        diff= arr[1]-arr[0];
        if((arr[1]+diff)%arr[2]==0 && (arr[1]+diff)>0)
        {
            flag=1;
        }
        diff=arr[2]-arr[1];
        if((arr[1]-diff)%arr[0]==0 && (arr[1]-diff)>0)
        {
            flag=1;
        }
        diff=arr[2]-arr[0];
        if(diff%2==0 && (arr[0]+diff/2)%arr[1]==0 && (arr[0]+diff/2)>0)
        {
            flag=1;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
    }
    return 0;
    
}