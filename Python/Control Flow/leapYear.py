year = int(input("Enter a year: "))
# (multiple of 4 but not 100) or (multiple of 400)

if (year%4 == 0 and year%100 != 0) or (year%400 == 0):
    print(year, "is a leap year")
else:
    print(year, "is not a leap year")