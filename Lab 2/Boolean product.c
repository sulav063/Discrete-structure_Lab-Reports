#include <stdio.h>

int main(void)
{
    
    int rows1, columns1; // variables to store the number of rows and columns of matrix the user wants
    printf("For matrix A:\n");
    printf("Enter the rows: ");
    scanf("%d", &rows1);
    printf("Enter the columns: ");
    scanf("%d", &columns1);

    
    int rows2, columns2; // variables to store the number of rows and columns of matrix the user wants
    printf("For matrix B:\n");
    printf("Enter the rows: ");
    scanf("%d", &rows2);
    printf("Enter the columns: ");
    scanf("%d", &columns2);

    
    int A[rows1][columns1], B[rows2][columns2], C[rows1][columns2];

    
    printf("\nEnter data for boolean matrix A:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nEnter data for boolean matrix B:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

   
    printf("\nMatrix A:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    
    printf("Matrix B:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nBoolean product of matrices A and B:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < rows2; k++)
            {
                C[i][j] = C[i][j] || (A[i][k] && B[k][j]);
            }
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}