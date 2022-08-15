#include <bits/stdc++.h>
using namespace std;
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2) cout<<-1<<endl;
        else
        {
            int arr[n][n];
            int k=1;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    arr[i][j]=k;
                    k++;
                }
            }
            for(int i=0;i<(n-1);i++)
            {
                for(int j=0;j<n;j=j+2)
                {
                    swap(arr[i][j],arr[i+1][j]);
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
    
}