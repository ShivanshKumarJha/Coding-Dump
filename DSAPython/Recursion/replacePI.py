def replacePI(str):
	if len(str) == 0 or len(str) == 1:
		return str;

	if str[0] == 'p' and str[1] == 'i':
		return "3.14" + replacePI(str[2:])

	else:
		return str[0] + replacePI(str[1:])


str = input("Enter the string: ")
print(replacePI(str))