#include<iostream>
#include<unordered_set>
using namespace std;
typedef long long ll;
float getRandFloat() {
  return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}
ll getRand(ll min, ll max) {
  return min + static_cast <ll>( getRandFloat() * ( max - min + 1 ) );
}
int main(void) {
  srand(time(NULL));
  ll n = 300; // 300, 1e5
  ll q = n;
  cout << n << ' ' << q <<'\n';
  int i = 0;
  while (i < q) {
    int c = getRand(1, 5);
    int x = getRand(0, n-1);
    int y = getRand(0, n-1);
    if (x == y) continue;
    cout << ((c<2) ? "Check" : "Connect") << ' ' << x << ' ' << y << '\n';
    i++;
  }
  return 0;
}