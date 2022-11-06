#include<iostream>
using namespace std;
bool isPrime(long long n) {
  long long n2 = n/2;
  for (long long i = 2; i <= n2; i++) {
    if (n % i == 0) return false;
  }
  return true;
}
int main(void) {
  long long p, q; cin >> p >> q;
  long long pq = stoll(to_string(p) + to_string(q));
  cout << ((isPrime(p) && isPrime(q) && isPrime(pq)) ? "Yes" : "No");
  return 0;
}