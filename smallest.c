#include<stdio.h>

int main(){
  int a,b,c;
  printf("Enter the three numbers");
  scanf("%d%d%d",&a,&b,&c);
  if(a<b && a<c)
  printf("a is the smallest value of three numbers%d",a);

  else if(b<a && b<c)
  printf("b is the smallest value of three numbers %d",b);

  else
  printf("c is the smallest value of three numbers %d",c);

  return 0;
}
