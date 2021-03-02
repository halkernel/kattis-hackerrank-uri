w = int(input())
p = int(input())
length = 0
for _ in range(p):
    wp,lp = map(int,input().strip().split())
    length += (lp * wp)
print(length//w)
