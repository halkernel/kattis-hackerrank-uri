num = int(input())
names = [input() for _ in range(num)]

if sorted(names) == names:
    print('INCREASING')
elif sorted(names, reverse=True) == names:
    print('DECREASING')
else:
    print('NEITHER')
