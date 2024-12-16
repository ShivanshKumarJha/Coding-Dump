def average(lst):
    sum = 0
    for i in lst:
        sum += i
    return sum / len(lst)

l = [1, 2, 3, 4, 5]
print(average(l))