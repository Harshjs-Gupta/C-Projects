// write a program to fin dthe maximum of the array elements

// #include <stdio.h>
// int main()
// {
//     int arr[7] = {5, 1, 9, 2, 12, 4, 8};
//     int max=0;
//     max = arr[0];

//     for (int i = 0; i < 7; i++)
//     {
//         if (arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d is maxmimum number", max);

//     return 0;
// }

// write a program to show max and min element of array in once

#include <stdio.h>
int main()
{
    int arr[7] = {5, 1, 9, 2, 12, 4, 8};
    int max, min;
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d is a maximum number of an array\n", max);
    printf("%d is a minimum number of an array", min);

    return 0;
}