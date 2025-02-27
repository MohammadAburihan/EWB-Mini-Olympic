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
  string str;
  cin >> str;
  stack<int> st;
  int mx = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == '(') {
      st.push(1);
    } else {
      int sum = 0;
      if (st.size() == 1 && st.top() % 2 == 0) {
        st.pop();
      }
      bool flag = false;
      while (!st.empty()) {
        int te = st.top();
        if (te % 2 == 1) {
          if (flag) {
            break;
          }
          sum++;
          flag = true;
        }

        st.pop();
        sum += te;
      }
      mx = max(mx, sum);
      st.push(sum);
    }
  }
  if (mx == 0)
    cout << -1;
  else
    cout << mx;
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
