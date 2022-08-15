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
        int arr[n];
        int temp1=n/2+1;
        int temp2=n/2;
        for(int i=0;i<n;i=i+2)
        {
            arr[i]=temp1;
            temp1++;
        }
        for(int i=1;i<n;i=i+2)
        {
            arr[i]=temp2;
            temp2--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}