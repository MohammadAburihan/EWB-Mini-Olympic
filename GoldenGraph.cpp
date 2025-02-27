#include <bits/stdc++.h>
using namespace std;

const int NN = 1e3;
vector<int> adj[NN];
vector<bool> vis(NN, false);

int main() {
  int r, n;
  cin >> r >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
  }
  queue<int> q;
  q.push(r);
  while (!q.empty()) {
    auto r = q.front();
    q.pop();
    for (auto x : adj[r]) {
      if (!vis[x]) {
        vis[x] = true;
        q.push(x);
      } else {
        cout << "Remove node " << x << " from childs of node " << r << endl;
      }
    }
  }
}
