#include<iostream>
using namespace std;

int find(int p[], int n, int x) {
  while (x != p[x]) {
    x = p[x];
  }
  return x;
}

void connect(int p[], int s[], int n, int x, int y) {
  int px = find(p, n, x);
  int py = find(p, n, y);
  if (px != py) {
    p[py] = px;
    s[px] += s[py];
    s[py] = 0;
  }
}

int main(void) {
  int n, q; cin >> n >> q;
  int p[n], s[n];
  for (int i=0; i<n; i++) {
    p[i] = i;
    s[i] = 1;
  }
  for (int z=0; z<q; z++) {
    string t; int x, y; cin >> t >> x >> y;
    if (t == "Check") {
      int px = find(p, n, x), py = find(p, n, y);
      if (px == py) {
        cout << s[px] << '\n';
      } else {
        cout << "-1\n";
      }
    } else {
      connect(p, s, n, x, y);
      int px = find(p, n, x);
      cout << s[px] << '\n';
    }
  }
  return 0;
}