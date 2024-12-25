def f(arr,ind,prev,n,dp):
    if ind == n: return 0

    if dp[ind][prev] != -1:
        return dp[ind][prev]
    
    notTake = 0 + f(arr,ind+1,prev,n,dp)
    take = 0

    if prev == -1 or arr[ind] > arr[prev]:
        take = 1 + f(arr,ind+1,ind,n,dp)

    dp[ind][prev] = max(take,notTake)
    return dp[ind][prev]

if __name__ == '__main__':
    arr = [int(ele) for ele in input().split()]
    n = len(arr)
    dp = [[-1 for _ in range(n+1)] for _ in range(n)]
    print(f(arr,0,-1,n,dp))