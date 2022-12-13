a, b, c = map(int, input().split())
if a != 0:
  print(a, end = '')
if b != 0:
  if a != 0 and b > 0: print('+', end = '')
  if b * b != 1: print(b, end = '')
  if b == -1: print('-', end = '')
  print('x', end = '')
if c != 0:
  if (a != 0 or b != 0) and c > 0: print('+', end = '')
  if c * c != 1: print(c, end = '')
  if c == -1: print('-', end = '')
  print('y')
if a == b == c == 0: print(0)