//write a c program to makes a simple calculater
#include<stdio.h>
int main()
{ 
   int a,b,c;
   int choice;
   printf("******************************\n");
   printf("******SIMPLE CALCULATER*******\n");
   printf("******************************\n");
   printf("Enter your choice: ");
   scanf("%d",&choice);
   printf("Enter first number: ");
   scanf("%d",&a);
   printf("Enter second number: ");
   scanf("%d",&b);
   switch(choice)
   {
    case 1: c=a+b;
            printf("Addition is %d \n",c);
    break;
    case 2: c=a-b;
            printf("Subtraction is %d \n",c);
    break;
    case 3: c=a*b;
            printf("Multiplication is %d \n",c);
    break;
    case 4: c=a/b;
            printf("Division is %d \n",c);
    break;
    default : printf("invalid choice");
   }

    return 0;
} 
