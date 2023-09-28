// Ankur Mishra
// CP Template
#include<bits/stdc++.h>

#define int long long
using namespace std;

void solve()
{
  string s;
  cin>>s;
  int num = 0;
  for(int i=0;i<s.size();i++)
  {
    int d = s[i]-'0';
    if(i==0 and d==9)
    {
      num = 9;
      continue;
    }
    if(d>=5)
    {
      num = (num*10)+(9-d);
    }
    else num = (num*10)+d;
  }
  cout<<num<<"\n";
}


int32_t main() {
  solve();
}