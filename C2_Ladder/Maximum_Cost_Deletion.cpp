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
        string s;
        int n,a,b,count=0;
        cin>>n>>a>>b>>s;
        if(b>=0)
        {
            cout<<n*(a+b)<<endl;
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(s[i]!=s[i-1]) count++;
            }
            int blocks=count+1;
            cout<<n*a+(blocks/2+1)*b<<endl;
        }
    }
    return 0;
    
}