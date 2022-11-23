n, k = map(int, input().split())
print(k // n, k % n, (n - k % n) % n)