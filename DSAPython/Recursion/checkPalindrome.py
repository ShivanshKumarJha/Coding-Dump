def check(str,s,e):
	if s == e:
		return True
	if str[s] != str[e]:
		return False
	return check(str,s+1,e-1)

str = input("Enter the string: ")
print(check(str,0,len(str)-1))