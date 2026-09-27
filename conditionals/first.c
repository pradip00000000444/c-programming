#include<stdio.h>
int main(){
int year=2008;
if(year%100==0){
  if(year%400==0){
    printf("leap year");
  }else{                            //nested if else 
  printf("not a leap year");
} 
}else{
  if(year%4==0){
    printf("leap year");
  }else{
  printf("not a leap year");
   } 
}
return 0; 
} 