a1, a2, a3, b1, b2, b3 = map(int,input().split())
print(max(a1 * b1 + a2 * b2 + a3 * b3, a1 * b1 + a2 * b3 + a3 * b2, a1 * b2 + a2 * b1 + a3 * b3, a1 * b2 + a2 * b3 + a3 * b1, a1 * b3 + a2 * b1 + a3 * b2, a1 * b3 + a2 * b2 + a3 * b1))
