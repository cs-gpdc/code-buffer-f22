#include<iostream>
#include<vector>
using namespace std;
bool isBalanced(long long x) {
  string s = to_string(x);
  int n = s.size();
  int n2 = n/2;
  int leftSum = 0, rightSum = 0;
  for (int i = 0; i < n2; i++) {
    leftSum += s[i] - '0';
    rightSum += s[n -1 -i] - '0';
  }
  return leftSum == rightSum;
}
int main(void) {
  int n; cin >> n;
  vector<int> v(n);
  vector<long long> p(n);
  cin >> v[0];
  p[0] = v[0];
  for (int i=1; i<n; i++) {
    cin >> v[i];
    p[i] = p[i - 1] + v[i];
  }
  int count = 0;
  for (int size = 1; size <= n; size++) {
    int last = n - size + 1;
    for (int start = 0; start < last; start++) {
      int end = start + size - 1;
      long long sum = p[end];
      if (start != 0) sum -= p[start - 1];
      // cout << size << ' ' << start << ' '<< end << ' ' << sum << ' ' << isBalanced(sum) << '\n';
      if (isBalanced(sum)) count++;
    }
  }
  cout << count;
  return 0;
}