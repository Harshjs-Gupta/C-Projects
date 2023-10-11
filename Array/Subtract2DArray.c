// write a program to Subtract two Matrix of 2D array

#include <stdio.h>
int main()
{
    int A[2][2];
    int B[2][2];
    int C[2][2];

    printf("Enter the elements of matrix A: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of matrix B: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n");

    printf("Here the subtracted elements of matrix which is C: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

     