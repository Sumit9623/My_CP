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
        int n,temp,max=INT_MIN,count=0;
        cin>>n;
        map<int ,int> arr;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr[temp]++;
        }
        for(auto val: arr)
        {
            if(val.second>max) max=val.second;
        }
        for(auto val : arr)
        {
            if(val.second==max) count++;
        }
        if(count==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
    
}