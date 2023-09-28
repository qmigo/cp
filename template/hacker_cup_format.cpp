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


const string kInputFilename = "../io/input.txt";
const string kOutputFilename = "../io/output.txt";

ifstream fin(kInputFilename);
ofstream fout(kOutputFilename);


void solve()
{
    
}

int32_t main() {
  int T;
  fin >> T;

  for (int case_idx = 1; case_idx <= T; ++case_idx) {

    fout << "Case #" << case_idx << ": " ;
    solve();
  }

  fout.close();
}