#include <bits/stdc++.h>
using namespace std;
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
long long int po(int ind)
{
    long long int ans=1;
    for(int i=0;i<=ind;i++)
    {
        ans=ans*10;
    }
    return ans;
}
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       if(n>45) cout<<-1<<endl;
       else 
       {
           int p=9;
           vector<int> arr;
           while(p)
           {
               if((n-p)>0)
               {
                   arr.push_back(p);
                   n=n-p;
                   p--;
               }
               else
               {
                   arr.push_back(n);
                   break;
               }
           }
           int ind=0;
           long long int ans=0;
            for(auto val: arr)
            {
                ans=ans+val*po(ind);
                ind++;
            }      
            cout<<fixed<<ans/10<<endl;     

       }
    }
    return 0;
    
}