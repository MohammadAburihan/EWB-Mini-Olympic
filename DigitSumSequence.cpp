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
  int x, y;
  cin >> x >> y;
  y--;
  if (x < y) {
    cout << "NO";
    return;
  }
  x -= y;
  if (x % 9 == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
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
