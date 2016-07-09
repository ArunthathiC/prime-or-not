#include<stdio.h>
void main(){
  int n,i;
  scanf("%d",&n);
  for(i=2;i<n;i++){
    if(i%n==0)
      flag=1;
  }
  if(flag==0)
       printf("Prime Number");
  else
    printf("not a prime number");
}
