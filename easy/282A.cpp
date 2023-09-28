// Ankur Mishra
// CP Template
#include<bits/stdc++.h>

#define int long long
using namespace std;

void solve()
{
  int t;
  cin>>t;
  int ans = 0;
  while(t--)
  {
    string s;
    cin>>s;
    if(s[1]=='+')ans++;
    else ans--;
  }
  cout<<ans<<"\n";
}

int32_t main() {
  solve();
}