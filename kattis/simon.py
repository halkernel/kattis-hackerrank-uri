n = int(input())
for _ in range(n):
    nl = input()
    if "simon says" not in nl:
        print('\n')
    else:
        print(nl[11:] + '\n')
