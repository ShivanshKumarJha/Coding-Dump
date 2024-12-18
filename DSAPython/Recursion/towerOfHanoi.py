def toh(n,a,b,c):
	if n == 1:
		print(f"move 1st disk from {a} to {c}")
		return 

	toh(n-1,a,c,b)
	print(f"move {n}th disk from {a} to {c}")
	toh(n-1,b,a,c)

toh(2,"s","h","d")