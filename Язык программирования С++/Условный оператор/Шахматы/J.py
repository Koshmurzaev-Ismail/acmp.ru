s1, s2 = input().split()
x1 = ord(s1[0]) - ord('A') + 1
y1 = int(s1[1])
x2 = ord(s2[0]) - ord('A') + 1
y2 = int(s2[1])
f = True
if x1 == x2 or y1 == y2:
    print('Rook')
    print('Queen')
    f = False
if abs(x2 - x1) == abs(y2 - y1):
    print('Bishop')
    print('Queen')
    f = False
if (x2 - x1) ** 2 + (y2 - y1) ** 2 == 5:
    print('Knight')
    f = False
if abs(x2 - x1) <= 1 and abs(y2 - y1) <= 1:
    print('King')
    f = False   
if (x1 == x2) and ((y2 - y1 == 1) or ((y1 == 2) and (y2 - y1 == 2))) and (y1 > 1):
    print('Pawn')
    f = False
if f:
    print('Nobody')