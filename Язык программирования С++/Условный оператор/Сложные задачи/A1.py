n = int(input())
n, k = n // 5, n % 5
match k:
    case 0: print(n, 0)
    case 1: print(n - 1, 2)
    case 2: print(n - 2, 4)
    case 3: print(n, 1)
    case 4: print(n - 1, 3)