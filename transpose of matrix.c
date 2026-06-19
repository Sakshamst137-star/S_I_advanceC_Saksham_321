#include <stdio.h>

int main() {
    int mat[5][3];
    int transpose[3][5];
    int i, j;

    
    printf("Enter elements for a 5x3 matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

   
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}   