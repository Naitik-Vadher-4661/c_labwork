#include<stdio.h>
#include<math.h>
void main()
{
    
    float b=9,c=25.25;
    double a=2,d=3,e=-2.5;
    printf("the square root of %.2f is %.2f\n",c,sqrt(c));
    printf("%.2f power %.2f is %.2f\n",a,d,pow(a,d));
    printf("the positive value of %.2f is %.2f \n",e,fabs(e));
    printf("the bigger round of value of %.2f is %.2f  \n",c,ceil(c));
    printf("the smaller round of value of %.2f is %.2f\n",c,floor(c));
    
}