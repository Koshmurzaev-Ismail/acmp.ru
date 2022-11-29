s = input()
x, y = ord(s[0]) - 64, ord(s[1]) - 48
if (x + y) % 2 == 0 :
    print('BLACK')
else:
    print('WHITE')