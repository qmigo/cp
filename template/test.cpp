// Ankur Mishra
// CP Template

#include<bits/stdc++.h>
#define cin fin
#define cout fout
#define int long long
using namespace std;


const string kInputFilename = "../io/input.txt";
const string kOutputFilename = "../io/output.txt";

ifstream fin(kInputFilename);
ofstream fout(kOutputFilename);


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
  fout.close();
}