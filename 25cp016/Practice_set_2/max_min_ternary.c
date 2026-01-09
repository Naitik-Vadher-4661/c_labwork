#include<stdio.h>
void main(){
    int a,b;
printf("put any 2 number here:");
scanf("%d %d",&a,&b);

printf("the maximum is %d\n",(a<b)?b:a);
printf("the minimum is %d",(a<b)?a:b);

}
