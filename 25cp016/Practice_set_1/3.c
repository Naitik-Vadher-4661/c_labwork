#include<stdio.h>
void main(){
    int a;
    float b;
    char ch;
    printf("put one integer here:\n");
    scanf("%d",&a);
    printf("put one float here:\n");
    scanf("%f",&b);

    printf("put one character here:\n");
    scanf(" %c",&ch);

    printf("the integer is:%d\n",a);
    printf("the float is:%.2f\n",b);
    printf("the character is: %c\n",ch);
}
