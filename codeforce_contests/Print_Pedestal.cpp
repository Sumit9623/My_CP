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
        if(n%3==0) cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<endl;
        else if(n%3==1) cout<<n/3<<" "<<n/3+2<<" "<<n/3-1<<endl;
        // else if(n%3==1) cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-2<<endl;
        else cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-1<<endl;


    }
    return 0;
    
}