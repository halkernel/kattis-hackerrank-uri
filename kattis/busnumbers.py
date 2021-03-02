
n = int(input())
sorted_stops = sorted(map(int, input().split()))
compressed = 0
ll = []

for i in range(len(sorted_stops)):    
        if i+1 < len(sorted_stops) and sorted_stops[i+1] - sorted_stops[i] == 1:        
            compressed +=1
        else:            
            if compressed >= 2:
                ll += str(sorted_stops[i-compressed]) + '-' + str(sorted_stops[i]) + ' '
                compressed = 0
            elif compressed == 1:
                ll += str(sorted_stops[i-1]) + ' ' + str(sorted_stops[i]) + ' '                
                compressed = 0                                   
            else:
                ll += str(sorted_stops[i]) + ' '

                
print(''.join([str(i) for i in ll]))
            
