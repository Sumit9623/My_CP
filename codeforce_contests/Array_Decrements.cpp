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
       long long int n,diff,flag=0,flag1=0;
       cin>>n;
       long long int arra[n],arrb[n];
       for(int i=0;i<n;i++)
       {
           cin>>arra[i];
       }
       for(int i=0;i<n;i++)
       {
           cin>>arrb[i];
       }
       int i=0;
       while(arrb[i]==0 && i<n)
       {
           i++;
       }
       if(i==n) flag1=1;
       else 
       {
            diff=arra[i]-arrb[i];
            for(int i=0;i<n;i++)
            {
                if(arra[i]>=arrb[i] && ((arra[i]-arrb[i])==diff || (arrb[i]==0 && arra[i]<=diff))) 
                {
                    continue;
                }
                else flag=1;
            }
       }
       if(flag1) cout<<"YES"<<endl;
       else if(flag) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;  
    }
    return 0;
    
}