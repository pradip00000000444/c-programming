#include<stdio.h>
int main(){
  int n=5;
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
    printf("sum is:%d\n",sum);
    printf("avgrage is:%.2f\n",((float)sum/n));
  return 0;
}