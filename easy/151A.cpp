// Ankur Mishra
// CP Template
#include<bits/stdc++.h>

#define int long long
using namespace std;

void solve()
{
  int  n, k, l, c, d, p, nl, np;
  cin>>  n>> k>> l>> c>> d>> p>> nl>> np;
  int drink = (k*l)/nl;
  int slice = c*d;
  int peanut = p/np;
  cout<<min(drink, min(slice, peanut))/n<<"\n";
}

int32_t main() {
  solve();
}