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
        long long int n,sum=0,temp,sum1=0;
        int flag=0;
        cin>>n;
        vector<long long int> arr(n);
        for(int i=0;i<n;i++)
        { 
            cin>>temp;
            arr[i]=temp;
            sum=sum+temp;
        }
        if(sum<(n*(n-1)/2)) cout<<"NO"<<endl;
        else
        {
            sum1=0;
            for(int i=1;i<n;i++)
            {
                sum1=sum1+i;
                arr[i]=arr[i]+arr[i-1];
                if(sum1>arr[i])
                {
                    flag=1;
                }
            }
            if(flag) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

       
    }
    return 0;
    
}