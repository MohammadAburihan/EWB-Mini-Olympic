#include <bits/stdc++.h>

using namespace std;
void solve() {
  int n;
  cin >> n;
  int res = 0;
  for (int i = 0; i < n; i++) {
    int te;
    cin >> te;
    res ^= te;
  }
  cout << res;
}

void solve2() {}

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
    cout << endl;
  }
  return 0;
}
