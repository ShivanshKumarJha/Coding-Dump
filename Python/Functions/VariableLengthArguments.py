def sum(*elements):
    res = 0
    for x in elements:
        res += x
    return res

print(sum(1,2,3,4,5))
print(sum(1,2,3,4,5,6))
print(sum(1,2,3,4,5,6,7))

# Behave as a dictionary
def printDetails(**details):
    for key, value in details.items():
        print(f"{key}: {value}")

printDetails(id = 101, name="Shivansh", age=21)
print()
printDetails(id = 102, name="Saurabh", age=22)