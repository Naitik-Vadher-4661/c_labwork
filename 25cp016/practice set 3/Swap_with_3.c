#include<stdio.h>
 void main()
{
    
    int a=3,b=5,temp;
    printf("value of a and b is %d and %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
     printf("After swapping the value of a and b is %d and %d\n",a,b);
}