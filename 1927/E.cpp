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

#define cout fout
#define cin fin

#define int long long
using namespace std;


const string kInputFilename = "../io/input.txt";
const string kOutputFilename = "../io/output.txt";

ifstream cin(kInputFilename);
ofstream cout(kOutputFilename);


void solve()
{
    int n,k;
    fin>>n>>k;
    int d = n-1;
    vector<int> ans = {1};
    for(int i=2;i<=n;i++) {
        ans[i-2]+d;
        d*=-1;
    }
    
}

int32_t main() {
  int T;
  cin >> T;

  for (int case_idx = 1; case_idx <= T; ++case_idx) {
    solve();
    cout<<"\n";
  }

//   cout.close();
}