#include<stdio.h>
int main(){
int amount=10000,discountPercentage,discountAmount,finalAmount;
if (amount<=5000){
  discountPercentage=0;
}else if(amount<=7000){
  discountPercentage=5;
}else if(amount<=9000){
  discountPercentage =10;
}else{
  discountPercentage=20;
}
discountAmount=(amount*discountPercentage)/100;
finalAmount=amount-discountAmount;
printf("the amount after discount is %d",finalAmount);
return 0; 
} 