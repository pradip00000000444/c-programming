#include <stdio.h>
int main(){
    int n, fact;
    printf("enter a number");
    scanf("%d",&n);
for(int i =1; i<=n;i++){
     fact=fact*i;
}
printf("fact=%d\n",fact);
    return 0;
}