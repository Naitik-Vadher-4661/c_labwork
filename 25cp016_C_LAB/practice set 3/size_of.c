#include<stdio.h>
#include<stdbool.h>
void main()
{
    
    int i=3;
    char c='N';
    float f=1.2;
    bool right=true;
    double d=2.3;
    long l=200;
    short s=1;

    printf("the size of integer i is %d \n",sizeof(i));
    printf("the size of float f is %d\n",sizeof(f));
    printf("the size of character c is %d\n",sizeof(c));
    printf("the size of boolean right is %d\n",sizeof(right));
    printf("the size of double d is %d\n",sizeof(d));
    printf("the size of long l is %d\n",sizeof(l));
    printf("the size of short s is %d\n",sizeof(s));
}