#include<stdio.h>
int main()
{

int age;
     printf("enter age");
     scanf("%d",&age);
     if(age>13&&age<18)
     {
       printf("teenager");
     }
     else if(age>=18)
     {
       printf("adult");
     }
     else
     {
       printf("child");
     }

return 0;
}