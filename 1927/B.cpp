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
// ofstream cout(kOutputFilename);


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    string res;
    vector<int> pos(26, 0);
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        for(int j=0;j<26;j++) {
            if(arr[i]==pos[j]) {
                res.push_back((char)(j+'a'));
                pos[j]++;
                break;
            }
        }
    }
    cout<<res<<"\n";
}

int32_t main() {
  int T;
  cin >> T;

  for (int case_idx = 1; case_idx <= T; ++case_idx) {
    solve();
  }

//   cout.close();
}