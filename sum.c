#include<stdio.h> 
int main () {
int a,b,s;
printf("enter two number\n");
scanf("%d%d",&a,&b);
printf("before swapping the values of a= %d and b=%d\n",a,b);

// swap
int temp=a;
a=b;
b=temp;
printf("after swapping values a=%d and b=%d",a,b);
  return 0;
}
  