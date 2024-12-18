def removeX(str,x):
	if len(str) == 0:
		return str
	if str[0] == x:
		return removeX(str[1:],x)
	else:
		return str[0] + removeX(str[1:],x)

str = input("Enter the main string: ")
char = input("Enter the character to be removed: ")
print(removeX(str,char))