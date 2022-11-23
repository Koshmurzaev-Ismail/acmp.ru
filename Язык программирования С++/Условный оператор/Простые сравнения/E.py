a1, b1 = map(int, input().split())
a2, b2 = map(int, input().split())
a3, b3 = map(int, input().split())
a4, b4 = map(int, input().split())
s1 = a1 + a2 + a3 + a4
s2 = b1 + b2 + b3 + b4
if s1 > s2:
  print(1)
elif s1 < s2:
  print(2)
else:
  print('DRAW')