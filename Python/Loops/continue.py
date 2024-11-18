# Print all those numbers in a list that are not multiple of 5
l = [10,16,17,18,19,15]
for i in l:
    if i % 5 == 0:
        continue
    else :
        print(i)

l = [10,16,17,18,9,15,21,13]
for i in l:
    if i % 5 == 0:
        continue
    if i % 7 == 0:
        break;
    print(i)
print("Bye")