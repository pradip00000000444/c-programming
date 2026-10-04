#include <stdio.h>
int main(){
    int n=121,rev=0;
    int copy= n;
    while(n!=0){
      int lastDigit = n%10;
      printf("%d\n",lastDigit);
      rev=rev*10+lastDigit;
      n=n/10;
    } 
    if(rev==copy){
      printf("the numnber is palindorme");
    }else{
      printf("the number is not palindorme");
    }
    return 0;
}  