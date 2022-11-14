class Node:
  def __init__(self):
    self.children = [None for _ in range(26)]

def insert(root, s):
  for i in range(len(s)):
    idx = ord(s[i]) - ord('a')
    if (root.children[idx] is None):
      root.children[idx] = Node()
    root = root.children[idx]

def solve(root, s):
  leaf = True
  for idx in range(26):
    if (root.children[idx] is not None):
      leaf = False
      s.append(chr(ord('a') + idx))
      solve(root.children[idx], s)
      s.pop()
  if (leaf):
    print(''.join(s))

n = int(input())
root = Node()
for i in range(n):
  s = input()
  insert(root, s)

s = []
solve(root, s)