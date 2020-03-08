numbers = input()
numbers = [int(x) for x in input().split()]
numbers = [i for i in numbers if i < 0]
print(len(numbers))
