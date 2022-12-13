#include <stdio.h>
int main() {
  int row, col, N[100][100], M[100][100], sum[100][100], i, j;
  scanf("%d", &row);
  scanf("%d", &col);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      printf("N %d %d: ", i + 1, j + 1);
      scanf("%d", &N[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      printf("M%d %d: ", i + 1, j + 1);
      scanf("%d", &M[i][j]);
    }

  // adding two matrix
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      sum[i][j] = N[i][j] + M[i][j];
    }

  // printing the result
  printf("\nSum of two matrix: \n");
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      printf("%d   ", sum[i][j]);
      if (j == col - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
