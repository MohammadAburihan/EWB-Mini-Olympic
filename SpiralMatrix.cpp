#include <bits/stdc++.h>

using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const long long INF = 1e18;

int inv(int a) {
  return a <= 1 ? a : MOD - (long long)(MOD / a) * inv(MOD % a) % MOD;
}

int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> ve(n, vector<int>(m));
  vector<vector<bool>> vis(n, vector<bool>(m, false));
  for (int i = 0; i < n; i++) {
    for (int q = 0; q < m; q++) {
      cin >> ve[i][q];
    }
  }
  int idx = 0;
  int all = n * m;
  int c = 0;
  int i = 0, q = 0;
  while (c < all) {
    cout << ve[i][q] << " ";
    vis[i][q] = true;
    c++;
    i += dir[idx][0];
    q += dir[idx][1];
    if (q == m || i == n || i == -1 || q == -1 || vis[i][q]) {
      i -= dir[idx][0];
      q -= dir[idx][1];
      idx++;
      idx %= 4;
      i += dir[idx][0];
      q += dir[idx][1];
    }
  }
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
