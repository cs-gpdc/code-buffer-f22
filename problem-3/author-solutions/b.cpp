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
  for (int i=0; i<n; i++) {
    cin >> v[i];
  }
  int count = 0;
  for (int size = 1; size <= n; size++) {
    int last = n - size + 1;
    for (int start = 0; start < last; start++) {
      long long sum = 0;
      // cout << size << ' ' << start << "; ";
      for (int offset = 0; offset < size; offset++) {
        // cout << v[start + offset] << ' ';
        sum += v[start + offset];
      }
      // cout << "; " << sum << ' ' << isBalanced(sum) << '\n';
      if (isBalanced(sum)) count++;
    }
  }
  cout << count;
  return 0;
}