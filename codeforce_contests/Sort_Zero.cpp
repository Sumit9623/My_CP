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
        int n,limit=-1;
        set<int> st;
        cin>>n;
        map <int,int> use;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            use[arr[i]]=i;
        }
        for(int i=(n-1);i>=0;i--)
        {
            if(arr[i-1]>arr[i])
            {
                limit=i-1;
                break;
            }
        }
        int maxin=INT_MIN;
        for(int i=limit;i>=0;i--)
        {
            if(use[arr[i]]>maxin) maxin=use[arr[i]];
        }
        for(int i=0;i<=maxin;i++)
        {
            st.insert(arr[i]);
        }
        cout<<st.size()<<endl;
    }
    return 0;
    
}






