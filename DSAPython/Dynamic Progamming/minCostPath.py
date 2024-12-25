def f(row,col,n,m,mat,dp):
    if row == n - 1 and col == m - 1: return mat[row][col]
    if col < 0 or col >= m or row < 0 or row >= n: return float('inf') 
    
    if dp[row][col] != -1: return dp[row][col]

    op1 = f(row+1,col,n,m,mat,dp)    
    op2 = f(row,col+1,n,m,mat,dp)    
    op3 = f(row+1,col+1,n,m,mat,dp)    

    dp[row][col] = mat[row][col] + min(op1,op2,op3)
    return dp[row][col]

if __name__ == '__main__':
    n, m = [int(i) for i in input().split()]
    mat = [[int(x) for x in input().split()] for _ in range(n)]
    dp = [[-1 for _ in range(n+1)] for _ in range(m+1)]
    ans = f(0,0,n,m,mat,dp)
    print(ans)