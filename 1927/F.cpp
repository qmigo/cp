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

// #define cin fin
// #define cout fout
// const string kInputFilename = "../io/input.txt";
// const string kOutputFilename = "../io/output.txt";
// ifstream fin(kInputFilename);
// ofstream fout(kOutputFilename);

// disjoint set
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

vector<int> path, ans;
bool found;

void dfs(int v, int p, unordered_map<int, vector<int>> &g, int f){
    path.push_back(v);
    if(v == f){
        ans = path;
        found = true;
        return;
    }
    for(int u: g[v]){
        if(u != p) dfs(u, v, g, f);
        if (found) return;
    }
    path.pop_back();
}

void solve()
{
  int v,e;
  cin>>v>>e;

  vector<vector<int>> edges;
  unordered_map<int, vector<int>> mst;

  for(int i=0;i<e;i++) {
    int x,y,w;
    cin>>x>>y>>w;
    edges.push_back({w,x,y});
  }  

  sort(edges.rbegin(), edges.rend());
  
  DisjointSet ds(v+1);
  int src,dst,wei;
  for(auto&i:edges) {
    int w,x,y;
    w = i[0];
    x = i[1];
    y = i[2];
    
    if(ds.union_sets(x,y)) {
      mst[x].push_back(y);
      mst[y].push_back(x);
    }
    else {
      src = x;
      dst = y;
      wei = w;
    }
  }

  found = false;
  path.resize(0);

  dfs(src, -1, mst, dst);
  cout<<wei<<" "<<ans.size()<<"\n";
  for(auto&i:ans) cout<<i<<" ";
  cout<<"\n";
  
  path.clear();
  ans.clear();

}

int32_t main() {
  int T;
  cin >> T;

  for (int case_idx = 1; case_idx <= T; ++case_idx) {
    solve();
  }

}