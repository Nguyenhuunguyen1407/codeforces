#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n,t;
    cin>>n>>t;
    long long a[n+1]; memset(a,0,sizeof(a));
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++) a[i]=a[i-1]+a[i];
    long long l,r;
    for (int i=1; i<=t; i++)
    {
        cin>>l>>r;
        cout<<a[n-l+r]-a[n-l]<<endl;
    }
}
