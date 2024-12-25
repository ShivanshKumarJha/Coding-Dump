def minSteps(n,dp):
    if n == 1: return 0

    if dp[n] != -1: return dp[n]
     
    op1 = minSteps(n-1,dp)
    op2,op3 = float('inf'),float('inf')
    if n%2 == 0: op2 = minSteps(n//2,dp)
    if n%3 == 0: op3 = minSteps(n//3,dp)

    dp[n] = 1 + min(op1,op2,op3)
    return dp[n]

if __name__ == '__main__':
    n = int(input())
    dp = [-1 for i in range(n+1)]
    res = minSteps(n,dp)
    print(res)