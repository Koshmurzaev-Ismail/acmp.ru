a1, b1, c1 = map(int, input().split())
a2, b2, c2 = map(int, input().split())
m1 = min(a1, b1, c1) - min(a2, b2, c2)
m3 = max(a1, b1, c1) - max(a2, b2, c2)
m2 = a1 + b1 + c1 - a2 - b2 - c2 - m1 - m3
if m1 == m2 == m3 == 0:
  print('Boxes are equal')
elif m1 <= 0 and m2 <= 0 and m3 <= 0:
  print('The first box is smaller than the second one')
elif m1 >= 0 and m2 >= 0 and m3 >= 0:
  print('The first box is larger than the second one')
else:
  print('Boxes are incomparable')