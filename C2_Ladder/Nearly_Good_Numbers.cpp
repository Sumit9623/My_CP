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
        long long int a,b;
        cin>>a>>b;
        
            int x,y;
            if(b%2==0)
            {
                x=1,y=3;
                cout<<"YES"<<endl;
                cout<<a<<" "<<a*3<<" "<<a*4<<endl;
            }
            else
            {
                x=1,y=b-1;
                cout<<"YES"<<endl;
                cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
            }
        
       
    }
    return 0;
    
}