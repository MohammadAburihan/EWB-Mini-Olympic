#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  int product = 1;
  int count = 0;
  int productw = 1;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0)
      count++;
    if (a[i] != 0)
      productw *= a[i];
    product *= a[i];
  }
  for (int i = 0; i < n; i++) {
    if (count > 1)
      cout << 0 << " ";
    else if (count == 1) {
      if (a[i] == 0)
        cout << productw << " ";
      else
        cout << 0 << " ";
    } else {
      cout << product / a[i] << " ";
    }
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t = 1;
  // cin >>t;
  while (t--)
    solve();
  return 0;
}
