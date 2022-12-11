x1, y1, x2, y2 = map(int, input().split())
xa, ya = map(int, input().split())
if y1 == y2:
    print(xa, 2 * y1 - ya)
if x1 == x2:
    print(2 * x1 - xa, ya)