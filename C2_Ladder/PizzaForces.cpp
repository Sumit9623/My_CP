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
        long long int n,a1,a2,a3,ans;
        cin>>n;
        if(n%6==0) a1=(n/6)*15;
        else a1=(n/6)*15+15;
        if(n%8==0) a2=(n/8)*20;
        else if(n%8<=6)
        {
            cout<<"i am in 8 else if"<<endl;
            a2=(n/8)*20+15;
        }
        else 
        {
            cout<<"i am in 8 else"<<endl;
            a2=(n/8)*20+20;
        }
        if(n%10==0) a3=(n/10)*25;
        else if(n%10<=6) a3=(n/10)*25+15;
        else if(n%10>6 && n%10<=8) a3=(n/10)*25+20;
        else a3=(n/10)*20+25;
        if(a1<=a2) ans=a1;
        else ans=a2;
        if(ans<=a3) ans=ans;
        else ans=a3;
        cout<<fixed<<ans<<endl;  
    }
    return 0;
    
}