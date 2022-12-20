n, m = map(int, input().split())
r = (n + 1) * m + (m + 1) * n + n + m
if n * m % 2 == 1 or n == 1 or m == 1:
  r -= 2
print(r)