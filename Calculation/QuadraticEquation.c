//write a program to find the quadratic euqation 
#include<stdio.h>
#include<math.h>

int main()
{
    float r1,r2,a,b,c;
    printf("Enetr the value of a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("%f are roots \n",r1);
    printf("%f are roots",r2);
  
    return 0;
}


