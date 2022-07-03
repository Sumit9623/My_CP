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
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
        }
        else if(a==0 || b==0)
        {
            if(a>=b) cout<<a<<" "<<0<<endl;
            else cout<<b<<" "<<0<<endl;
        }
        else if(a-b==1 || b-a==1) cout<<1<<" "<<0<<endl;
        else if(a>b) 
        {
            cout<<a-b<<" ";
            if(b>(a-b))
            {
                if(a%(a-b)>((a-b)-a%(a-b))) cout<<((a-b)-a%(a-b))<<endl;
            }
            else if(b==(a-b)) cout<<0<<endl;
            else cout<<b<<endl;
        }
        else 
        {
            cout<<b-a<<" ";
            if (a>(b-a))
            {
                if(b%(b-a)>((b-a)-b%(b-a))) cout<<((b-a)-b%(b-a))<<endl;
            }
            else if(a==(b-a)) cout<<0<<endl;
            else cout<<a<<endl;
        }
     
    }
    return 0;
    
}