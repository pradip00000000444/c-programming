#include<stdio.h>
#include<math.h> 
int main(){ 
 int r;
 float p =3.14;
printf("enter the value of radius");
scanf("%d",&r);
int area = r*pow(r,2);
int ci = 2*p*r;
printf("the area of circle is:%d\n",area);
printf("the circumference of circle is:%d",ci);
return 0;
} 