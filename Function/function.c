//write  a c program to find the cube of any number using function.

// #include<stdio.h>

// double cube(double n);

// int main()
// {
//     float n;
//     double c;
//     printf("enter number: ");
//     scanf("%f",&n);
//     c=cube(n);
//     printf("cube of %f is %f",n,c);
    
//     return 0;
// }

// double cube(double n)
// {
//     return (n*n*n);
// }



//write a c program to find the diameter , circumferance and area of circle.

// #include<stdio.h>
// #include<math.h>

// double diameter(double radius);
// double circumference(double radius);
// double area(double radius);

// int main()
// {
//     float radius,dia,cir,ar;
//     printf("enter radius of circle: ");
//     scanf("%f",&radius);

//     dia=diameter(radius);
//     cir=circumference(radius);
//     ar=area(radius);

//     printf("diameter is:  %.2f \n",dia);
//     printf("circumference is:  %.2f \n",cir);
//     printf("area is:  %.2f \n",ar);



//     return 0;
// }

// double diameter(double radius)
// {
//     return (2 * radius);
// }
// double circumference(double radius)
// {
//     return (2 * 3.14 * radius);
// }
// double area(double radius)
// {
//     return (3.14 * radius * radius);
// }


//write a c program to find maximum and minimum bewteen two numbers using function.

// #include <stdio.h>

// int max(int a, int b);
// int min(int a, int b);


// int main() 
// {
//     int a, b, maximum, minimum;
    
//     printf("Enter any two numbers: ");
//     scanf("%d%d", &a, &b);
    
//     maximum = max(a, b);  
//     minimum = min(a, b);  
    
//     printf("Maximum = %d\n", maximum);
//     printf("Minimum = %d", minimum);
    
//     return 0;
// }

// int max(int a, int b)
// {
//     return (a > b ) ? a : b;
// }


// int min(int a, int b) 
// {
//     return (a > b ) ? b : a;
// }


//write a c programm to print i for namestaor f for bonjour.


// #include<stdio.h>

// void namesta();
// void bonjour();

// int main()
// {
//    printf("enter f for french & i for indian: ");
//    char ch;
//    scanf("%c",&ch);
//    if(ch=='i')
//    {
//     printf("namesta \n");
//    }
//    else if(ch=='f')
//    {
//     printf("bonjour \n");
//    }
//    else
//    {
//     printf("invalid ");
//    }

//     return 0;
// }

// void namesta()
// {
//     printf("namesta");
// }
// void bonjour()
// {
//     printf("bonjour");
// }



//write a c rogram to check weather a number is even or odd.

//   #include<stdio.h>

//   int even(int a)
//   {
//     return !(a & 1);
//   }

//   int main()
//   {
//     int a;
//     printf("enter number: ");
//     scanf("%d",&a);

//     if(even(a))
//     {
//         printf("%d is even number",a);
//     }
//     else
//     {
//         printf("%d is odd number",a);
//     }

//     return 0;
//   }



//write  a c program to check weather a number is prime,armstrong or perfect number.


//  #include<stdio.h>


//  int prime(int n);
//  int armstrong(int n);
//  int perfect(int n);

//  int main()
//  {
//     int n;
//     printf("enter number: ");
//     scanf("%d",&n);

//     if(prime(n))
//     {
//         printf("%d is prime number \n",n);
//     }
//     else
//     {
//         printf("%d is not prime number \n",n);
//     }

//     if(armstrong(n))
//     {
//         printf("%d is armstrong number \n",n);
//     }
//     else
//     {
//         printf("%d is not armstrong number \n",n);
//     }

//     if(perfect(n))
//     {
//         printf("%d is perfect number \n",n);
//     }
//     else
//     {
//         printf("%d is not perfect number \n",n);
//     }

//     return 0;
//  }

 
// int prime(int n)
// {
//    int count=0;
//    for(int i=2;i<=n/2;i++)
//    {
//     if(n % i==0)
//     {
//         return 0;
//     }
//    }

//     return 1;
// }

// int armstrong(int n)
// {
//     int r,m,sum=0;
//     m=n;
//     while(n>0)
//     {
//         r=n%10;
//         n=n/10;
//         sum=sum+r*r*r;
//     }
//     if(m==sum)
//     {
//         printf("%d is armstrong number",m);
//     }
//     else
//     {
//         printf("%d is not armstrong number",m);
//     }

//   return (m==sum);
// }

// int perfect(int n)
// {
//     int sum=0;
//     n=sum;
//     for(int i=1;i<n;i++)
//     {
//         if(n % i==0)
//         {
//             sum=sum+i;
//         }
//     }

//     return (n==sum);
// }



// write a function to calculate area of a square, a circle, a rectangle.

// #include<stdio.h>
// #include<math.h>

// float squarearea(float side);
// float circlearea(float radius);
// float rectanglearea(float l, float b);

// int main()
// {
//     float side=5;
//     float radius=5;
//     float l=2,b=3;

//     printf("area of square is %f \n", pow(side,2));
//     printf("area of circle is %f \n", 3.14 * pow(radius,2));
//     printf("area of rectangle is %f \n", l * b);

//     return 0;
// }
// float squarearea(float side)
// {
//     return side * side;
// }
// float circlearea(float radius)
// {
//     return 3.14 * radius * radius;
// }
// float rectanglearea(float l, float b)
// {
//     return l * b;
// }





