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
        long long int n;
        int flag=0;
        cin>>n;
        for(int i=1;i<50;i++)
        {
            if(n==pow(2,i))
            {
                cout<<"I am in if       "<<i<<endl;
                flag=1;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
    
}