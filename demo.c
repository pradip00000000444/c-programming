#include<stdio.h> 
int main(){ 
int l,b,ar,pi;
printf("enter the value of length and breadth\n");
scanf("%d%d",&l,&b);
ar=l*b;
pi=2*(l+b);
printf("the area of rectangle is:%d\n",ar);
printf("the perimeter of rectangle is:%d",pi);
return 0;
} 