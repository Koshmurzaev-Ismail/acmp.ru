n = int(input())
a = list(map(int, input().split()))
s = 0
m = 0
for i in a:
  if i <= 0:
    s = 0
  else:
    s += 1
  if s > m:
    m = s
print(m)