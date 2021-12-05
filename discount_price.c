#include<stdio.h>

int main(){
 int op,dis;
  printf("Enter the original price and discount");
  scanf("%d%d",&op,&dis);

  printf("discounted price = %d",op-(op*dis)/100);
  return 0;
}
