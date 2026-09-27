#include<stdio.h>
#include<math.h> 
int main(){ 
 int p= 1000;
 double r=5.0;
 int t=2;
 double A =p*pow((1+r/100),t);
 double CI = A-p;
 printf("CI is:%.2lf",CI);
return 0;
} 