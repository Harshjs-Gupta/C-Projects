// write a program to add two matrix array

#include <stdio.h>

int main()
{
    int A[2][2];
    int B[2][2];
    int C[2][2];

    printf("Enter the elements of matrix A of 2 by 2: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of matrix B of 2 by 2: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n");

    printf("Addition of thw matrix A and B is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}