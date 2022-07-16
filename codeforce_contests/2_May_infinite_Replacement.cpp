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
       string s,t;
       cin>>s>>t;
       int acount=0,scount=0,n=t.size();
       for(int i=0;i<n;i++)
       {
           if(t[i]=='a') acount++;
       }
       if(!t.compare("a")) cout<<1<<endl;
       else if(acount>0)
       {
           cout<<-1<<endl;
       }
       else
       {    
           cout<<s.size()+1<<endl;
       }
       
    }
    return 0;
    
}