s = input()
a = e = i = o = u = False
for c in s:
  if not a and c.lower() == 'a':
    a = True
  if not e and c.lower() == 'e':
    e = True
  if not i and c.lower() == 'i':
    i = True
  if not o and c.lower() == 'o':
    o = True
  if not u and c.lower() == 'u':
    u = True
print("Yes" if (a and e and i and o and u) else "No")