#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("creep.inp","r",stdin); 
    freopen("creep.out","w+",stdout);
    long long t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        long long a,b;
        cin>>a>>b;
        while (a!=0 && b!=0)
        {
            cout<<"01";
            a--; b--;
        }
        while (a!=0)
        {
            cout<<"0";
            a--;
        }
        while (b!=0)
        {
            cout<<"1";
            b--;
        }
        cout<<endl;
    }
}
