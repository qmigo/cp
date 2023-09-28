// Ankur Mishra
// CP Template
#include<bits/stdc++.h>

#define int long long
using namespace std;

void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  int sum = abs(a-b)+abs(b-c)+abs(c-a);
  cout<<sum/2<<"\n";
}

int32_t main() {
  solve();
}