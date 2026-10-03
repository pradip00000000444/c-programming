#include <stdio.h>
int main(){
    int n,c=0;
    printf("enter a number");
    scanf("%d",&n);
  for(int i=1;i<=n;i++){
     if(n%i==0){
        c++;
     }
    }
     printf("number of factors of %d is %d",n,c);
    return 0;
}  