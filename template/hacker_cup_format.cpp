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

#define cin fin
#define cout fout
const string kInputFilename = "../io/input.txt";
const string kOutputFilename = "../io/output.txt";
ifstream fin(kInputFilename);
ofstream fout(kOutputFilename);

class DisjointSet {
private:
    vector<int> parent, rank;

public:
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int find(int u) {
        if (parent[u] != u)
            parent[u] = find(parent[u]);
        return parent[u];
    }

    bool union_sets(int u, int v) {
        int pu = find(u);
        int pv = find(v);
        if (pu == pv)
            return false;
        if (rank[pu] < rank[pv])
            parent[pu] = pv;
        else if (rank[pu] > rank[pv])
            parent[pv] = pu;
        else {
            parent[pv] = pu;
            rank[pu]++;
        }
        return true;
    }
};

void solve()
{
  int n;
  cin>>n;
  cout<<n<<"\n";
}

int32_t main() {
  int T;
  cin >> T;

  for (int case_idx = 1; case_idx <= T; ++case_idx) {
    solve();
  }

}