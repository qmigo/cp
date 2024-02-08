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


int findLargestLessThanOrEqual(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int result = -1; 
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] <= target) {
            result = mid; 
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    
    return result; 
}

int findSmallestGreaterThanOrEqual(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int result = -1; 
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] >= target) {
            result = mid; 
            right = mid - 1; 
        } else {
            left = mid + 1; 
        }
    }

    return result;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    vector<int> A,B;
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }
    arr.push_back(-1);
    int l = 1;
    int r = 2;
    while(r<=n+1) {
        if(arr[l]==arr[r]) {
            r++;
        }
        else {
            A.push_back(l);
            B.push_back(r-1);
            l = r;
        }
    }

    // for(auto&i:A)cout<<i<<" ";
    // cout<<"\n";
    // for(auto&i:B)cout<<i<<" ";
    // cout<<"\n";
    

    int q;
    cin>>q;
    while(q--) {
        int i, j;
        cin>>i>>j;
        int ll = findLargestLessThanOrEqual(A, i);
        int rr = findSmallestGreaterThanOrEqual(B,j);
        if(ll==rr)cout<<"-1 -1\n";
        else cout<<i<<" "<<A[ll+1]<<"\n";

    }   
    cout<<"\n";
}

int32_t main() {
  int T;
  cin >> T;

  for (int case_idx = 1; case_idx <= T; ++case_idx) {

    solve();
  }

//   cout.close();
}