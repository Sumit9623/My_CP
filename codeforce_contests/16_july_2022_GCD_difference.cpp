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
        long long int n,l,r,flag=0;
        cin>>n>>l>>r;
        long long int arr[n];
        int i=0;
        long long int temp;
        while(i<n)
        {
           if(l%(i+1)==0) 
           {
               arr[i]=l;
               i++;
           }
           else if(l+((i+1)-l%(i+1))<=r)
           {
               arr[i]=l+((i+1)-l%(i+1));
               i++;
           }
           else 
           {
               flag=1;
               break;
           }
        }
        if(flag) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
    
}