#include <bits/stdc++.h>

using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const long long INF = 1e18;

int inv(int a) {
  return a <= 1 ? a : MOD - (long long)(MOD / a) * inv(MOD % a) % MOD;
}

void solve() {
  int n;
  cin >> n;
  vector<int> ve(n);
  for (int i = 0; i < n; i++) {
    cin >> ve[i];
  }
  int l = 0, r = 1e9;
  while (l < r) {
    int mid = (r - l) / 2 + l;
    // cout << l << " " << mid << " " << endl;
    int q = 0;
    for (int i = 0; i < 3; i++) {
      int sum = 0;
      for (; q < n; q++) {
        if (ve[q] + sum <= mid) {
          sum += ve[q];
        } else {
          break;
        }
      }
    }
    if (q == n) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }
  cout << l;
}

void solve2() {}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
    cout << endl;
  }
  return 0;
}
