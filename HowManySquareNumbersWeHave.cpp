#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
  int n, m;
  cin >> n >> m;
  int cnt = 0;
  for (int i = 1; i * i <= m; i++) {
    if (i * i >= n) {
      cnt++;
    }
  }
  cout << cnt;
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
