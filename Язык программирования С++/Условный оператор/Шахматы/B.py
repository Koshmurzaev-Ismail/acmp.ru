x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
if abs(x2 - x1) == abs(y2 - y1):
  print("YES")
else:
  print("NO")