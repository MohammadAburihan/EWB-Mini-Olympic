#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> ve(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int q = 0; q < m; q++) {
      cin >> ve[i][q];
    }
  }
  vector<int> dp(m + 1, LLONG_MAX);
  dp[m - 1] = 0;
  for (int q = n - 1; q >= 0; q--) {
    for (int i = m - 1; i >= 0; i--) {
      dp[i] = min(dp[i], dp[i + 1]) + ve[q][i];
    }
  }
  cout << dp[0];
}

void solve2() {}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
    cout << endl;
  }
  return 0;
}
