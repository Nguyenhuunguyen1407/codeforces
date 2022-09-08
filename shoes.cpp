#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t;
    cin>>t;
    for (int z=1; z<=t; z++)
    {
        string s; cin>>s; bool key=true; long long r,rs; r=0; rs=0;
        if (s[0]!='A' || s[s.size()-1]!='B' || s.size()<2) key=false;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]=='A') r++; else r--;
            if (r<0) 
            {
                key=false; break;
            }
        }
        if (key==true) cout<<"YES"<<"\n"; else cout<<"NO"<<"\n";
    }
