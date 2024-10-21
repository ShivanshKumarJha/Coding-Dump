//Row Major Formula-from left to right
for m*n 2-d Array
Add(A[i][j])=L+(i*n+j)*w

If language is allowing address from index 1 then 
Add(A[i][j])=L+((i-1)*n+(j-1))*w



//Column Major Formula-from right to left
for m*n 2-d Array
Add(A[i][j])=L+(j*m+i)*w

If language is allowing address from index 1 then 
Add(A[i][j])=L+((j-1)*m+(i-1))*w