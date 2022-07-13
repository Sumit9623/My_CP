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
       int arr[n][n];
       int ans=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
                char c;
                cin>>c;
                arr[i][j]=c-'0';
           }
       }
       for(int i=0;i<(n+1)/2;i++)
       {
           for(int j=i;j<n-i-1;j++)
           {
               
               int zc=0,oc=0;
               if(arr[i][j]==1) oc++;
               else zc++;
               if(arr[j][n-1-i]==1) oc++;
               else zc++;
               if(arr[n-1-i][n-1-j]==1) oc++;
               else zc++;
               if(arr[n-1-j][i]==1) oc++;
               else zc++;
               if(oc==4) continue;
               else if(zc==4) continue;
               else 
               {
                   ans=ans+min(zc,oc);
               }
           }
       }
       cout<<ans<<endl; 
    }
    return 0;
    
}
