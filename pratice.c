#include <stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int lastDigit=(n%10);
    int secondLastDigit=(n/10)%10;
    int sum=lastDigit+secondLastDigit;
    printf("the sum of last digit and secondLastDigit of a number is :%d\n",sum);
return 0;
}
