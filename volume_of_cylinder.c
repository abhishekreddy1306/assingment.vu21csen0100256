#include<stdio.h>
//volume of the cylinder
int main(){
    float raddi,height;
    printf("enter the the raddius and height of the cylinder respectively ");
    scanf("%f%f",&raddi,&height);

    printf("the volume of the cylinder %.2f", (3.14*raddi*raddi*height));
    return 0;
}
