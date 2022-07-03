#include <bits/stdc++.h>
using namespace std;
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    fastIO;
    int t,flag=0;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        for(int i=0;i<50;i++)
        {
            if(n==pow(2,i)) flag=1;
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
    
}