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
        int count=0;
        long long int n;
        cin>>n;
        map<int,int> arr={{0,0},{5,0}};
        while(n)
        {
            int rem = n%10;
            if(rem==0)
            {
                if(arr[0]>0) break;
                arr[0]++;
                // cout<<"I am in 0 "<<arr[0]<<"  "<<arr[2]<<"  "<<arr[5]<<"  "<<arr[7]<<endl;

                count++;
            }
            else if(rem==5)
            {
                if(arr[0]>0) break;
                arr[5]++;
                // cout<<"I am in 5 "<<arr[0]<<"  "<<arr[2]<<"  "<<arr[5]<<"  "<<arr[7]<<endl;
                count++;
            }
            else if(rem==2 || rem==7)
            {
                if(arr[5]>0) break;
                else count++;
                // cout<<"I am in 2 or 7 "<<arr[0]<<"  "<<arr[2]<<"  "<<arr[5]<<"  "<<arr[7]<<endl;
            }
            else
            {
                // cout<<"I am in else : "<<endl;
                count++;
            }
            n=n/10;
        }
        cout<<count-1<<endl;

    }
    return 0;
    
}