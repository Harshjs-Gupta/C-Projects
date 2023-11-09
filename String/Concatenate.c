#include<stdio.h>
int main()
{

char firststr[50]="hello ";
char secondstr[]="world";
strcat(firststr,secondstr);
puts(firststr);

    return 0;
}