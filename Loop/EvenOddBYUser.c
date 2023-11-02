// keep taking nuumber as input from user until user enter an odd number

#include<stdio.h>
int main()
{

  int n;
  do
  {
    printf("enter number : ");
    scanf("%d",&n);
    printf("%d \n",n);
    if(n % 2 != 0)
     break;
  
  } while(1);
  printf("end");

return 0;
}