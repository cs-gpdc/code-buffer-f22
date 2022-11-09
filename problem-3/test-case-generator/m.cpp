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
  ll n = getRand(3000, 3000);
  cout << n <<'\n';
  for (int i = 0; i < n; i++) {
    cout << getRand(0, 1e9) << ' ';
  }
  return 0;
}