n = int(input())
n, k = n // 5, n % 5
if k == 0:
  print(n, 0)
elif k == 1:
  print(n - 1, 2)
elif k == 2:
  print(n - 2, 4)
elif k == 3:
  print(n, 1)
else:
  print(n - 1, 3)