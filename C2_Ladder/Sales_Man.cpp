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
        int n,x,y,ans1,ans2;
        int xmin=INT_MAX,xmax=INT_MIN,ymin=INT_MAX,ymax=INT_MIN;
        cin>>n;
        while(n--)
        {
            cin>>x>>y;
            if(x<xmin) xmin=x;
            if(x>xmax) xmax=x;
            if(y<ymin) ymin=y;
            if(y>ymax) ymax=y;

        }
        if(xmax>0 && xmin>0) ans1=(2*xmax);
        else if(xmax<0 && xmin<0) ans1=-(2*xmin);
        else ans1=2*(xmax-xmin);
        if(ymax>0 && ymin>0) ans2=(2*ymax);
        else if(ymax<0 && ymin<0) ans2=-(2*ymin);
        else ans2=2*(ymax-ymin);
        cout<<ans1+ans2<<endl;

    }
    return 0;
    
}