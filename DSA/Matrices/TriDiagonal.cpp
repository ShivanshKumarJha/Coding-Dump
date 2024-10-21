// 11000
// 11100
// 01110
// 00111
// 00011
// M[i][j]=non zero, if |i-j|<=1
//         zero,     if |i-j|>1
//3n-2 elements are non-zero
// If we are taking lower diagonal then main diagonal and at last upper diagonal
// Case1: if i-j=1  index=i-1
// Case2: if i-j=0  index=n-1+i-1
// Case3: if i-j=-1 index=2n-1+i-1
// Square band mtrix have more than 1 diagonal below and above the main diagonal