n = int(input())
a1 = n // 100000
a2 = n // 10000 % 10
a3 = n // 1000 % 10
a4 = n // 100 % 10
a5 = n // 10 % 10
a6 = n % 10
if a1 + a2 + a3 == a4 + a5 + a6:
  print('YES')
else:
  print('NO')