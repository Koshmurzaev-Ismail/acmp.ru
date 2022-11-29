x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
if (x2 - x1) ** 2 + (y2 - y1) ** 2 == 5:
  print('YES')
else:
  print('NO')