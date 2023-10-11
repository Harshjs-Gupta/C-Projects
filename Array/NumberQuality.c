/*Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0*/

#include <stdio.h>
int main()
{
    int num[10]={2,4,6,-5,0,7,-6,10,3,9};
    int pos = 0;
    int neg = 0;
    int even = 0;
    int odd = 0;
    int zero = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > 0)
            pos++;
        else if (num[i] < 0)
            neg++;
        else if (num[i] == 0)
            zero++;
        if(num[i] % 2 == 0)
            even++;
        else
            odd++;    
    }
    printf("%d postive number are found in an element of array \n ", pos);
    printf("%d negative number are found in an element of array \n", neg);
    printf("%d even number are found in an element of array \n", even);
    printf("%d odd number are found in an element of array \n", odd);
    printf("%d zero number are found in an element of array \n", zero);

    return 0;
}