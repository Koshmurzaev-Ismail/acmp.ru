s = input() + '\n' + input() + '\n' + input()
b, r, g, y = 'black', 'red', 'green', 'yellow'
f1 = b + '\n' + b + '\n' + g
f2 =  b + '\n' + b + '\n' + 'GREEN'
f3 =  b + '\n' + y + '\n' + b
f4 = r + '\n' + b + '\n' + b
f5 = r + '\n' + y + '\n' + b
f6 = b + '\n' + 'YELLOW' + '\n'+ b
if s == f1:
  print(f2)
elif s == f2:
  print(f3)
elif s == f3:
    print(f4)
elif s == f4:
  print(f5)
elif s == f5:
  print(f1)
elif s == f6:
  print(f6)
else:
  print('error')