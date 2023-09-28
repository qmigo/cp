// Ankur Mishra
// CP Template
#include<bits/stdc++.h>

#define int long long
using namespace std;

void solve()
{
  int x=0;
  int y=0;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      int v;
      cin>>v;
      if(v)
      {
        x=i;y=j;
      }
    }
  }
  cout<<(abs(x-2)+abs(y-2))<<"\n";
}

int32_t main() {
  solve();
}