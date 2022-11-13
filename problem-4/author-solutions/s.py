def find(p, n, x):
  while (x != p[x]):
    x = p[x]
  return x

def connect(p, s, n, x, y):
  px = find(p, n, x)
  py = find(p, n, y)
  if (px != py):
    p[py] = px
    s[px] += s[py]
    s[py] = 0

[n, q] = [int(x) for x in input().split()]
p = [0] * n
s = [0] * n
for i in range(n):
  p[i] = i
  s[i] = 1
for z in range(q):
  [t, x, y] = input().split()
  x = int(x)
  y = int(y)
  if (t == "Check"):
    px = find(p, n, x)
    py = find(p, n, y)
    if (px == py):
      print(s[px])
    else:
      print(-1)
  else:
    connect(p, s, n, x, y)
    px = find(p, n, x)
    print(s[px])