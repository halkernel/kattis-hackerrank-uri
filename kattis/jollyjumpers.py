


while True:
    try:
        values = list(map(int, input().split()))
    except Exception:
        break
    
    n = [0 for i in range(3001)]
    
    for i in range(2, len(values)):
        m = abs(values[i] - values[i-1])
        if n[m] == 0 and m > 0 and m < values[0]:
            n[m] = 1
            
    if sum(n) == values[0] - 1:
        print("Jolly")
    else:
        print("Not jolly")
