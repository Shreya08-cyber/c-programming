#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);
    int mat[50][50];
    printf("Matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    int maxSum = -1, maxRow = -1;
    for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++) sum += mat[i][j];
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i + 1;  }  }
    printf("Row %d\nSum=%d\n", maxRow, maxSum);
    return 0;
}
