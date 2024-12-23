def countPairsWithDiffK(self,arr, k):
    mp = {}
    for i in arr: mp[i] = mp.get(i,0) + 1
    res = 0
    
    if k == 0:
        for i in mp:
            if mp[i] > 1: res += (mp[i] * (mp[i] - 1)) // 2
    else:
        for i in mp:
            if i - k in mp: res += (mp[i] * mp[i-k])
                
    return res