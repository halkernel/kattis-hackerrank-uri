n = int(input())
for _ in range(n):
    m = int(input())
    stores = input().split()
    stores = [int(i) for i in stores]
    distance = max(stores) - min(stores)
    print(distance*2)
