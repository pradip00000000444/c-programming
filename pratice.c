#include <stdio.h>
int main(){
    float hrs;
    printf("enter hours");
    scanf("%f",&hrs);
    float min= hrs*60;
    float sec= hrs*3600;
    printf("total minutes=%.2f\n, total second=%.2f\n",min,sec);
return 0;
}
