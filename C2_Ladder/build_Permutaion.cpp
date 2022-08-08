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
        int n,ans;
        cin>>n;
        n--;
        vector<int> arr;
        vector<int> arr1;
        for(int i=0;i<=400;i++)
        {
            arr.push_back(i*i);
        }
        int min=*lower_bound(arr.begin(),arr.end(),n)-n;
        int max=n+1;
        int maxsq=*lower_bound(arr.begin(),arr.end(),n);
        for(int i=n;i>=0;i--)
        {
            ans=maxsq-i;
            if(ans>=max)
            {
                maxsq=*lower_bound(arr.begin(),arr.end(),i);
                max=min;
                min=*lower_bound(arr.begin(),arr.end(),i)-i;
                // cout<<"max = "<<max<<"  min = "<<min<<endl;
                ans=maxsq-i;
            }
            arr1.push_back(ans);
        }
        for(int i=n;i>=0;i--)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}