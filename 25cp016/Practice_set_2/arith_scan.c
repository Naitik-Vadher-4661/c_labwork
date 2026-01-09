#include<stdio.h>
void main(){
    int a,b;
printf("put any 2 number here:");
scanf("%D %D",&a,&b);
printf("the sum of %d and %d is %d\n",a,b,a+b);
printf("the subtraction of %d and %d is %d\n",a,b,a-b);
printf("the multiplication of %d and %d is %d\n",a,b,a*b);
printf("the division of %d and %d is %.2f\n",a,b,(float)a/b);
printf("the modulo of %d and %d is %d\n",a,b,a%b);
}
