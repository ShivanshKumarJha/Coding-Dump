text = input("Enter a string: ")

res = ""
for i in range (-1,-(len(text)+1),-1):
    res += text[i]
print(res)

res = ""
for i in text:
    res = i + res
print(res)