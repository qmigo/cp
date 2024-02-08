// Ankur Mishra
// CP Template
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l = 1e9;
    int r = -1;
    for(int i=0;i<n;i++) {
        if(s[i]=='B') {
            l = min(l, i);
            r = max(r, i);
        }
    }   
    
    if(r==-1) {
        cout<<"0\n";
    }
    else
    cout<<r-l+1<<"\n";
}

int32_t main() {
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}