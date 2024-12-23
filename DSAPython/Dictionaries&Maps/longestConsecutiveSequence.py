def longestConsecutive(nums):
    mp  = {}     
    for i in nums: mp[i] = mp.get(i,0) + 1
    res = 0
    
    for i in range(len(nums)):
        if nums[i]-1 not in mp:
            curr = nums[i]
            currLen = 0
            while curr in mp:
                currLen += 1
                curr += 1
            res = max(res,currLen)

    return res