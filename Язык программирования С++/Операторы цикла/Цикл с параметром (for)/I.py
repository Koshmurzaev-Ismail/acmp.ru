a, b, c, d = map(int, input().split())
for x in range(-100, 101):
  if a * x ** 3 + b * x * x + c * x + d == 0:
    print(x, end = ' ')