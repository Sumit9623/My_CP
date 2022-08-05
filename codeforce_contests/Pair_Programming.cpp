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
        int k,n,m,flag=0;
        cin>>k>>n>>m;
        int p=m=n;
        int arr1[n],arr2[m],ans[p];
        int sum=k;
        int j=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        for(int i=0;i<min(m,n);i++)
        {
            if(arr1[i]==0) 
            {
                sum++;
                if(arr2[i]>sum) 
                {
                    flag=1;
                    break;
                }
                ans[j]=0;
                j++;
                ans[j]=arr2[i];
                j++;
            }
            else if(arr2[i]==0)
            {
                sum++;
                if(arr1[i]>sum) 
                {
                    flag=1;
                    break;
                }
                ans[j]=0;
                j++;
                ans[j]=arr1[i];
                j++;
            }
            else 
            {
                if(arr1[i]>sum) 
                {
                    flag=1;
                    break;
                }
                else
                {
                    ans[j]==arr1[i];
                    j++;
                }
                if(arr2[i]>sum) 
                {
                    flag=1;
                    break;
                }
                else
                {
                    ans[j]==arr2[i];
                    j++;
                }
            }
            if(n>m)
            {
                int d=m;
                while(d<n)
                {
                    if(arr1[d]>sum)
                    {
                        flag=1;
                        break;
                    }
                    else 
                    {
                        ans[j]=arr1[d];
                        j++;
                    }
                }
            }
            else
            {
                int d=n;
                while(d<m)
                {
                    if(arr2[d]>sum)
                    {
                        flag=1;
                        break;
                    }
                    else 
                    {
                        ans[j]=arr2[d];
                        j++;
                    }
                }
            }
        }
        if(flag) cout<<-1<<endl;
        else
        {
            for(int i=0;i<n+m;i++)
            {
                cout<<ans[i];
            }
        }

    }
    return 0;
    
}