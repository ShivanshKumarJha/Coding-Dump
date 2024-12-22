# Writing the data in file
with open("practice.txt","w") as f:
    f.write("Hi everyone\nWe are learning File I/O\n")
    f.write("using Python.\nI like programming in Python")


# Replace the word Python with C++
with open("practice.txt","r") as f:
    data = f.read()
new_data = data.replace("Python","C++")
with open("practice.txt","w") as f:
    f.write(new_data)


# Search for a word in the file
word = "C++"
with open("practice.txt","r") as f:
    data = f.read()
    words = data.split()
    # print(words)
    if word in words:
        print("Word found")
    else:
        print("Word not found")


# WAF to find in which line of the file does the word "learning" occurs first. Print -1 if not found
def find_line(file_name,word):
    with open(file_name,"r") as f:
        lines = f.readlines()
        # The enumerate object yields pairs containing a count (from start, which defaults to zero) and a value yielded by the iterable argument.
        for i,line in enumerate(lines):
            if word in line:
                return i + 1
        return -1
            

# WAF to count even numbers present in a file separated by a comma
def count_even(filename):
    with open("numbers.txt","r") as f:
        data = f.read()
        numbers = data.split(",")
        count = 0
        for num in numbers:
            if int(num) % 2 == 0:
                count += 1
        return count
            

if __name__ == "__main__":
    print(find_line("practice.txt","learning"))
    print(find_line("practice.txt","programming"))
    print(count_even("numbers.txt"))