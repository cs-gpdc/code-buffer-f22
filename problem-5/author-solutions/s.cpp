#include<iostream>
using namespace std;
struct Node {
  Node* children[26]{};
};
void insert(Node* root, string s) {
  for (int i=0; s[i]; i++) {
    int idx = s[i] - 'a';
    if (!root->children[idx]) {
      root->children[idx] = new Node();
    }
    root = root->children[idx];
  }
}
void solve(Node* root, string& s) {
  bool leaf = true;
  for(int idx=0; idx<26; idx++) {
    if (root->children[idx]) {
      leaf = false;
      s.push_back('a' + idx);
      solve(root->children[idx], s);
      s.pop_back();
    }
  }
  if (leaf) cout << s << '\n';
}
int main(void) {
  int n; cin >> n;
  Node* root = new Node();
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    insert(root, s);
  }
  string s;
  solve(root, s);
  return 0;
}