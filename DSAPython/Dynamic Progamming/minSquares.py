from math import sqrt

def f(n,dp):
    if n <= 3: return n

    if dp[n] != -1: return dp[n]

    ans = n
    for i in range(1,int(sqrt(n)) + 1):
        ans = min(ans,1 + f(n - i * i,dp))

    dp[n] = ans
    return dp[n]

if __name__ == '__main__':
    n = int(input())
    dp = [-1 for i in range(n+1)]
    res = f(n,dp)
    print(res)