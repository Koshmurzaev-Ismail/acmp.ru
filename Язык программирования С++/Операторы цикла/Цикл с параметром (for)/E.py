n = int(input())
r = -1
mx = 0
for i in range(n):
  v, s = map(int, input().split())
  if s == 1 and v > mx:
    r = i + 1
    mx = v
print(r)