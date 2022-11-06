#include<iostream>
using namespace std;
bool isPrime(int n) {
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}
int main(void) {
  int p, q; cin >> p >> q;
  int pq = stoi(to_string(p) + to_string(q));
  cout << ((isPrime(p) && isPrime(q) && isPrime(pq)) ? "Yes" : "No");
  return 0;
}