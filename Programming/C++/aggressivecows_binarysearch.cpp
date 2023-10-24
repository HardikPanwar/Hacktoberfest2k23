#include<bits/stdc++.h>
#define int             long long int
#define pb              push_back
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mod             1000000007
#define w(x)            int x; cin>>x; while(x--)
using namespace std;
 

 bool check(int a[],int n,int c,int dis)
{
    int last=a[0];
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]-last>=dis)
        {
            last=a[i];
            cnt++;
        }
        if(cnt==c)
        {
            return true;
        }
    }
    return false;
}
 
int32_t main() {
 
    w(T)
    {
        int n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int lb = a[0];
        int ub = a[n-1];
        int res = 0;
        while(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(check(a,n,c,mid))
        {
            res=mid;
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    cout<<res<<endl;
    }
}