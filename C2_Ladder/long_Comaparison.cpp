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
        long long int x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        int mini= min(p1,p2);
        p1=p1-mini;
        p2=p2-mini;
        if(p1>7) cout<<">"<<endl;
        else if(p2>7) cout<<"<"<<endl;
        else 
        {
            long long int a=x1,b=x2;
            while(p1--)
            {
                a=a*10;
            }
            while(p2--)
            {
                b=b*10;
            }
            if(a==b) cout<<"="<<endl;
            else if(a>b) cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
       
    }
    return 0;
    
}