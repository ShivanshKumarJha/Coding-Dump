def convert(s):
	if len(s) == 0:
		return 0
	n = len(s)
	smallAns = convert(s[0:n-1])
	nextDigit = int(s[n-1])
	return (smallAns)*10 + nextDigit

n = input("Enter the number: ")
ans = convert(n)
print(ans)
print(type(ans))