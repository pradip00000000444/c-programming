#include<stdio.h> 
int main(){
int a=102, b=150, c =90;
printf("%d\n",!(a>b && c>b));
printf("%d\n",!(a<b || c>b));
return 0;
}  