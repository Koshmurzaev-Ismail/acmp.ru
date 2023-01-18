n = int(input())
s = 0
for i in range(1, abs(n) + 1):
  s += i
if n <= 0:
  s = 1 - s
print(s)