#include <stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int lastDigit=(n%10);
    int secondLastDigit=(n/10)%10;
    int thirdLastDigit=(n/100)%10;\
    printf("the last digit of a number is:%d\n",lastDigit);
    printf("the second Last digit of a number is:%d\n",secondLastDigit);
    printf("the third last digit of a number is:%d\n",thirdLastDigit);
return 0;
}
