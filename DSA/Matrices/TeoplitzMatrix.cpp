// 2  3  4  5  6
// 7  2  3  4  5
// 8  7  2  3  4
// 9  8  7  2  3
// 10 9  8  7  2 
// M[i][j]=M[i-1,j-1]
// Sufficient to store only one row and column
// Therefore n+n-1 spaces are sufficient to store the elements
// 2 3 4 5 6 7 8 9 10
// Upper Triangular Part are in row 1 and Lower Triangular Part are in row 2
// A[i][j]=j-i      if i<=j
//         n+i-j-1  if i>j