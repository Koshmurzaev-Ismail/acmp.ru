k, m, n = map(int, input().split())
if n <= k:
  print(2 * m)
else:
  print(((2 * n + k - 1) // k) * m)