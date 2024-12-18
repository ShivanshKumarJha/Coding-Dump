def removeX(str,i,res,x):
	if i == len(str):
		return res
	if str[i] == x:
		return removeX(str,i+1,res,x)
	res = res + str[i]
	return removeX(str,i+1,res,x)

str = input("Enter the main string: ")
char = input("Enter the character to be removed: ")
print(removeX(str,0,"",char))