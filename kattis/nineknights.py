l1 = input().strip()
l2 = input().strip()
l3 = input().strip()
l4 = input().strip()
l5 = input().strip()
board = [list(l1), list(l2), list(l3), list(l4), list(l5)]
knights = sum(x.count('k') for x in board)
isValid = True
if(knights != 9):
    isValid = False
       
else:
    for i in range(len(board)):
        for j in range(len(board[i])):
            if(board[i][j] == 'k'):
                if i - 1 in range(0, len(board) - 1) and j + 2 in range(0, len(board) - 1):
                    if board[i - 1][j + 2] == "k":
                        isValid = False
                if i + 1 in range(0, len(board) - 1) and j - 2 in range(0, len(board) - 1):
                    if board[i + 1][j - 2] == "k":
                        isValid = False
                if i - 1 in range(0, len(board) - 1) and j - 2 in range(0, len(board) - 1):
                    if board[i - 1][j - 2] == "k":
                        isValid = False
                if i + 2 in range(0, len(board) - 1) and j + 1 in range(0, len(board) - 1):
                    if board[i + 2][j + 1] == "k":
                        isValid = False
                if i - 2 in range(0, len(board) - 1) and j + 1 in range(0, len(board) - 1):
                    if board[i - 2][j + 1] == "k":
                        isValid = False
                if i - 2 in range(0, len(board) - 1) and j - 1 in range(0, len(board) - 1):
                    if board[i - 2][j - 1] == "k":
                        isValid = False
                if i + 2 in range(0, len(board) - 1) and j - 1 in range(0, len(board) - 1):
                    if board[i + 2][j - 1] == "k":
                        isValid = False
                if(i + 1 in range(0, len(board) - 1) and j + 2 in range(0, len(board) - 1)):
                    if board[i + 1][j + 2] == 'k':
                        isValid = False

if isValid:
    print("valid")
else:
    print("invalid")

