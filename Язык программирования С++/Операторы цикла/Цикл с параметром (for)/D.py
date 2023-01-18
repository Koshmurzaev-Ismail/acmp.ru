n = int(input())
a = list(map(int, input().split()))
for i in range(n):
  if a[i] <= 437:
    print('Crash', i + 1)
    break
else:
  print('No crash')