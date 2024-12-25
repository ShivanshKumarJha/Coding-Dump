def lcs(i,j,s,t,n,m,dp):
    if i >= n or j >= m: return 0

    if dp[i][j] != -1: return dp[i][j]

    if s[i] == t[j]: 
        dp[i][j] = 1 + lcs(i+1,j+1,s,t,n,m,dp)
        return dp[i][j]
    
    op1 = lcs(i+1,j,s,t,n,m,dp)
    op2 = lcs(i,j+1,s,t,n,m,dp)
    dp[i][j] = max(op1,op2)
    return dp[i][j]

if __name__ == '__main__':
    s,t = [x for x in input().split()]
    n, m = len(s), len(t)
    dp = [[-1 for _ in range(m+1)] for _ in range(n+1)]    
    print(lcs(0,0,s,t,n,m,dp))