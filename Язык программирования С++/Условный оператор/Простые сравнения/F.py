n = int(input())
a1 = n // 1000
a2 = n // 100 % 10
a3 = n // 10 % 10
a4 = n % 10
if n == a4 * 1000 + a3 * 100 + a2 * 10 + a1:
  print('YES')
else:
  print('NO')