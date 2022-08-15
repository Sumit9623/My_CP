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
        long long int n,x,mini=0,maxi=0,temp,sum=0;
        cin>>n>>x;
        vector<long long int> arr;
        vector <long long int> arr1;
        for(long long int i=0;i<n;i++)
        {
            cin>>temp;
            arr.push_back(temp);
            maxi=maxi+arr[i]/x;
            if(arr[i]%x!=0) maxi++;
            sum=sum+arr[i];
        }
        mini=sum/x;
        if(sum%x!=0) mini++;
        cout<<fixed<<mini<<" "<<maxi<<endl;
    }
    return 0;
    
}