# Find all occurrences of the pattern in the text
txt = input("Enter the text: ")
pat = input("Enter the pattern: ")
pos = txt.find(pat)

while pos >= 0:
    print(pos)
    pos = txt.find(pat, pos + 1)