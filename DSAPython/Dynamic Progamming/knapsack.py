def f(ind,curr,wt,val,capacity,n,dp):
    if ind >= n: return float('-inf')
    if curr == capacity: return 0

    if dp[ind][curr] != -1:
        return dp[ind][curr]
    
    op1,op2 = 0,0
    if curr + wt[ind] <= capacity:
        op1 = val[ind] + f(ind,curr+wt[ind],wt,val,capacity,n,dp)
    op2 = f(ind+1,curr,wt,val,capacity,n,dp)

    dp[ind][curr] = max(op1,op2)
    return dp[ind][curr]

def knapSack(val,wt,capacity):
    n = len(wt)
    dp = [[-1 for _ in range(capacity+1)] for _ in range(n+1)]
    return f(0,0,wt,val,capacity,n,dp)

if __name__ == '__main__':
    capacity = int(input())
    wt = [int(ele) for ele in input().split()]
    val = [int(ele) for ele in input().split()]

    print(knapSack(val,wt,capacity))