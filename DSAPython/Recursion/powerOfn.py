def power(n,x):
    if x == 0:
        return 1
    return n * power(n,x-1)