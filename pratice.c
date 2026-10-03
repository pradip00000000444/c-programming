#include <stdio.h>
int main(){
    int n,x=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i =1; i<=n;i++){
         if (n%i==0){ 
            x++;
        }
    if(x==2){
        printf("prime");
    } else if(x>2){
        printf("composite");
    }
    return 0;
}