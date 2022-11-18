def isBalanced(x):
  s = str(x)
  n = len(s)
  n2 = n//2
  leftSum = rightSum = 0
  for i in range(n2):
    leftSum += ord(s[i]) - ord('0')
    rightSum += ord(s[n -1 -i]) - ord('0')
  return leftSum == rightSum

n = int(input())
v = [int(x) for x in input().split()]
p = [0] * n
p[0] = v[0]
for i in range(1, n):
  p[i] = p[i - 1] + v[i]
count = 0
for size in range(1, n+1):
  last = n - size + 1
  for start in range(last):
    end = start + size - 1
    sum = p[end]
    if start != 0:
      sum -= p[start - 1]
    if (isBalanced(sum)):
      count += 1
print(count)