m1, m2, m3 = map(int, input().split())
if m1 < 94 or m1 > 727 or  m2 < 94 or m2 > 727 or m3 < 94 or m3 > 727:
  print('Error')
else:
  print(max(m1, m2, m3))