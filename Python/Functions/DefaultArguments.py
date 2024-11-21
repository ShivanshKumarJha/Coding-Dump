def printDetails(id,name="NA",price="NA"):
    print(f"Id is {id}")
    print(f"Name is {name}")
    print(f"Price is {price}")

printDetails(101,"abc",100)
print()
printDetails(102)
print()
printDetails(103,"xyz")

printDetails(name="abc",id=101)
print()
printDetails(price="200",id=102)
print()
printDetails(id=103)
