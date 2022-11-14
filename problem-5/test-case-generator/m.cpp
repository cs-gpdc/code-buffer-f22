#include<iostream>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
float getRandFloat() {
  return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}
ll getRand(ll min, ll max) {
  return min + static_cast <ll>( getRandFloat() * ( max - min + 1 ) );
}
string getRand(int n) {
  string s;
  for (int i=0; i<n; i++) s.push_back('a' + getRand(0, 25));
  return s;
}
int main(void) {
  srand(time(NULL));
  ll n = 300; // 300, 1e5
  cout << n <<'\n';
  ll first = sqrt(n);
  vector<string> v;
  unordered_set<string> s;
  while (s.size() < first) {
    int sn = getRand(1, first);
    string t = getRand(sn);
    if (s.count(t)) continue;
    s.insert(t);
    v.push_back(t);
  }
  while (s.size() < n) {
    int si = getRand(0, v.size()-1);
    int ci = getRand(1, first);
    string t = v[si] + (char)('a' + getRand(0, 25));
    if (s.count(t)) continue;
    s.insert(t);
    v.push_back(t);
  }
  random_shuffle(v.begin(), v.end());
  for(int i=0; i<n; i++) cout << v[i] << '\n';
  return 0;
}