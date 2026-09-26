#include<stdio.h> 
int  main() { 
int num1;
char ch; 
printf("enter an integer value\n");
scanf("%d",&num1);
getchar();// after integer, if the character the printing value is not show  to enter the value. should use getchar(), use space before format specifier. 
printf("enter an characte value\n");
scanf("%c",&ch);
printf("character is: %c , integer is: %d",ch,num1);
  return 0;
}
