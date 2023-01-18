s, p = map(int, input().split())
for x in range(1, s // 2 + 1):
  if x * (s - x) == p:
    print(x, s - x)
    break