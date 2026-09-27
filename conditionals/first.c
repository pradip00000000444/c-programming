#include<stdio.h>
int main(){
char al;
printf("enter alphabat");
scanf("%c",&al);
if(al=='a'||al =='e'||al=='i'||al=='o'||al=='u')
  printf("vowel",al);
else
  printf("consonent",al);
return 0; 
} 