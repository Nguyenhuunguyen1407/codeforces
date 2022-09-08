#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t;
    cin>>t;
    for (int z2=1; z2<=t; z2++)
    {
        char a[9][9]; 
        for (int i=1 ;i<=8; i++)
          for (int j=1; j<=8; j++)
          {
            cin>>a[i][j];
          }
        for (int i=2; i<=7; i++)
          for (int j=2; j<=7; j++)
          {
            if (a[i][j]==a[i-1][j+1] && a[i][j]==a[i-1][j-1] && a[i][j]==a[i+1][j-1] && a[i][j]==a[i+1][j+1] && a[i][j]=='#') {
              cout<<i<<' '<<j<<endl;
            }
          }
    }
}
