//4d arrays
A[d1][d2][d3][d4]

//Row Major
Add(A[i1][i2][i3][i4])=L+((i1*d2*d3*d4)+(i2*d3*d4)+(i3*d4)+i4)*w

//Column Major
Add(A[i1][i2][i3][i4])=L+((i4*d3*d2*d1)+(i3*d2*d1)+(i2*d1)+i1)*w



//n-d arrays

//Row Major
Add(A[i1][i2][i3][i4])=L+(sigma(p=1 to p=n)i(p))*(pie(q=p+1 to q=n)d(q))*w    O(n square)

//Column Major
Add(A[i1][i2][i3][i4])=L+(sigma(p=n to p=1)i(p))*(pie(q=p-1 to q=1)d(q))*w

// After arranging and taking common the time complexity will get reduced by O(n) This is known as HORNER's RULE