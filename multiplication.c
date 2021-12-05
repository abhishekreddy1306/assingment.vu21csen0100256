#include<stdio.h>

int main(){
 int a;
 printf("Enter the number to get multiplication table: ");
 scanf("%d",&a);

 for(int i = 1; i<=10; i++)
    {
       printf("%d x %d = %d", a, i, (a*i));
    }
    return 0;
}
