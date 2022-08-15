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
        int n,count=0;
        cin>>n;
        while(n)
        {
            if(n%2==1) count++;
            n=n/2;
        }
        cout<<count-1<<endl;
    }
    return 0;
    
}