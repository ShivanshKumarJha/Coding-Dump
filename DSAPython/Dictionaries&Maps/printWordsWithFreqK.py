def countWords(s,k):
    words = s.split(' ')
    mp = {}
    for i in words:
        mp[i] = mp.get(i,0) + 1
    for w in mp:
        if mp[w] == k:
            print(w)

countWords("This is a word string having many many word",2)