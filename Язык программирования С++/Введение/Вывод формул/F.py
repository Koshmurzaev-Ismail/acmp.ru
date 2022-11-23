h, a, b= map(int, input().split())
print((h - b % h - 1) // (a - b % h) + 1)