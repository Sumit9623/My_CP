
#include <iostream>
using namespace std;
int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans=0,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]==0) continue;
            else
            {
                arr[i]=arr[i-1]+arr[i];
                arr[i-1]=0;
            } 
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0) continue;
            else ans=ans+(arr[i]*(arr[i]+1)/2);
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<ans<<endl; 
    }
	return 0;
}
