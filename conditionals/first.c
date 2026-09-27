#include<stdio.h>
int main(){
char name[]="polu";
int age=21;
printf("enter age");
scanf("%d",&age);
if(age>=18){
  printf("Hello %s, your are eligible to vote",name);
}else{
  printf("Hello %s you will be eligible to vote after %d years",name,(18-age));
}
return 0; 
} 