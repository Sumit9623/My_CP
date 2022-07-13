
// 12 July 2022   codeforces round 806 (div 4)
// Problem C : Cypher
// link : https://codeforces.com/contest/1703/problem/C


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
        int n,b;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b;
            string s;
            cin>>s;
            for(int j=0;j<b;j++)
            {
                if(s[j]=='U') 
                {
                    arr[i]=(arr[i]-1+10)%10;
                }
                else 
                {
                    arr[i]=(arr[i]+1)%10;
                }
            }
        }
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}