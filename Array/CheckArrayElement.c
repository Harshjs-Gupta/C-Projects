/*Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number
is present in array or not.*/

#include <stdio.h>

int main()
{

    int A[10];
    printf("Enter the 10 number: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }

    int num, i, found=0;

    printf("Enter a number again to check element: ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++)
    {
        if (A[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("%d is found search is successfully ", num);
    }
    else
    {
        printf("%d is not found search is unsuccessfull", num);
    }
    return 0;
}