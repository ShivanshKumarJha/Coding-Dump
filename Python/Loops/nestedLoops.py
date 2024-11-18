# Print tables from 1 to 10
for i in range(1,11):
    print("Table of",i,": ",end=" ")
    for j in range(1,11):
        print(i*j,end=" ")
    print()

print("-----------------------------------------------")
for i in range(1,3):
    j = 1
    while(j < 3):
        print(i,j)
        j = j + 1
    print("GFG")
