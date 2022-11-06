def isPrime(n):
  i = 2
  n2 = n//2
  while i <= n2:
    if n % i == 0:
      return False
    i += 1
  return True
p, q = [int(x) for x in input().split()]
pq = int(str(p) + str(q))
print("Yes" if (isPrime(p) and isPrime(q) and isPrime(pq)) else "No")