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
        int m,n;
        cin>>n>>m;
        string s;
        for(int i=0;i<m;i++)
        {
            s.push_back('B');
        }
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=(m+1-arr[i]))
            {
                if(s[arr[i]-1]=='B') s[arr[i]-1]='A';
                else s[m-arr[i]]='A';
            }
            else
            {
                if(s[m-arr[i]]=='B') s[m-arr[i]]='A';
                else s[arr[i]-1]='A';
            }
        }
        cout<<s<<endl;

    }
    return 0;
    
}