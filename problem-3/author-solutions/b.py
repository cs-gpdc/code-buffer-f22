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
count = 0
for size in range(1, n+1):
  last = n - size + 1
  for start in range(last):
    sum = 0
    for offset in range(size):
      sum += v[start + offset]
    if (isBalanced(sum)):
      count += 1
print(count)