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


// const string kInputFilename = "../io/input.txt";
// const string kOutputFilename = "../io/output.txt";

// ifstream cin(kInputFilename);
// ofstream fout(kOutputFilename);


void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    set<int> A,B;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        A.insert(x);
    }
    for(int i=0;i<m;i++) {
        int x;
        cin>>x;
        B.insert(x);
    }
    int a=0, b=0;
    for(int i=1;i<=k;i++) {
        if(A.count(i)==0 and B.count(i)==0){
            cout<<"NO\n";
            return;
        }
        if(A.count(i))a++;
        if(B.count(i))b++;
    }

    if(a>=k/2 and b>=k/2)cout<<"YES\n";
    else cout<<"NO\n";
}

int32_t main() {
  int T;
  cin >> T;

  for (int case_idx = 1; case_idx <= T; ++case_idx) {
    solve();
  }

//   cout.close();
}