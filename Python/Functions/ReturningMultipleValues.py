def add_multiply(a, b):
    return a + b, a * b

sum, mul = add_multiply(3, 5)
print(sum)
print(mul)
print()

def add_multiply_sub(a,b):
    return [a+b, a*b, a-b]

sum, mul, sub = add_multiply_sub(3, 5)
print(sum)
print(mul)
print(sub)