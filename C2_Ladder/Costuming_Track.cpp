
// https://codeforces.com/problemset/problem/1543/B

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
        long long int ans,sum=0,temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            sum=sum+temp;
        }
        cout<<(sum%n)*(n-(sum%n))<<endl;

    }
    return 0;
    
}