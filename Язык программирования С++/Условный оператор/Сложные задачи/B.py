k, w = map(int, input().split())
a1, b1, a2, b2, a3, b3 = map(int, input().split())
f1 = a1 <= w and b1 >= k
f2 = a2 <= w and b2 >= k
f3 = a3 <= w and b3 >= k
f12 = a1 + a2 <= w and b1 + b2 >= k
f13 = a1 + a3 <= w and b1 + b3 >= k
f23 = a2 + a3 <= w and b2 + b3 >= k
f123 = a1 + a2 + a3 <= w and b1 + b2 + b3 >= k
if f1 or f2 or f3 or f12 or f13 or f23 or f123:
  print("YES")
else:
  print("NO")