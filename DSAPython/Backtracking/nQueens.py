def isSafe(row,col,board,n):
    # Vertical direction
    i = row - 1
    while i >= 0:
        if board[i][col] == 1: return False
        i -= 1

    i = row - 1
    j = col - 1

    # Upper Left Diagonal
    while i >= 0 and j >= 0:
        if board[i][j] == 1: return False
        i -= 1
        j -= 1
    
    i = row - 1 
    j = col + 1

    # Upper Right Diagonal
    while i >= 0 and j < n:
        if board[i][j] == 1: return False
        i -= 1
        j += 1

    return True

def printPathsHelper(row,n,board):
    if row == n:
        for i in range(n):
            for j in range(n):
                print(board[i][j],end = ' ')
        print()
    
    for col in range(n):
        if isSafe(row,col,board,n):
            board[row][col] = 1
            printPathsHelper(row+1,n,board)
            board[row][col] = 0

def printPaths(n):
    board = [[0 for j in range(n)] for i in range(n)]
    printPathsHelper(0,n,board)

if __name__ == '__main__':
    n = int(input())
    printPaths(n)