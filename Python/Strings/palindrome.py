text = input("Enter a string: ")
low = 0
high = len(text) - 1

while low < high:
    if text[low] != text[high]:
        print("Not a palindrome")
        break
    low += 1
    high -= 1
else:
    print("Palindrome")