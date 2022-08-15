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
        vector <int> arr;
        vector <int> ans;
        map<int,int> mp;
        int temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
            mp[temp]=i;
            // cout<<"I am here "<<endl;
        }
        int end=n;
        while(mp.size())
        {
            int start=(--mp.end())->second;
            for(int i=start;i<end;i++)
            {
                ans.push_back(arr[i]);
                mp.erase(arr[i]);
            }
            end=start;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;



       
    }
    return 0;
    
}