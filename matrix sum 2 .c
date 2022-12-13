#include <stdio.h>
int main() {
  int row, col, a, b, sum, i, j;
  //printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &row);
  //printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &col);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == col - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
