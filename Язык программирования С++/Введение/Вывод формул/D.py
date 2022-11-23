h1, m1, s1 = map(int, input().split())
h2, m2, s2 = map(int, input().split())
print(h2 * 60 * 60 + m2 * 60 + s2 - h1 * 60 * 60 - m1 * 60 - s1)