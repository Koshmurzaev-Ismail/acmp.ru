l1, w1, h1 = map(int, input().split())
l2, w2, h2 = map(int, input().split())
lc, wc, hc = map(int, input().split())
if l1 > w1: l1, w1 = w1, l1
if l2 > w2: l2, w2 = w2, l2
if lc > wc: lc, wc = wc, lc
f = "NO"
if h1 + h2 <= hc:
  if max(l1, l2) <= lc and max(w1, w2) <= wc:
    f = "YES"
if max(h1, h2) <= hc:
  l3 = l1 + l2
  w3 = max(w1, w2)
  if l3 > w3: l3, w3 = w3, l3
  if l3 <= lc and w3 <= wc:
    f = "YES"
print(f)