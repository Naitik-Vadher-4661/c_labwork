#include<stdio.h>
void main(){
int a,n;
printf("put any value here:");
scanf("%d",&a);

for(int i=2;i<=a;i++){
float c;
c=a/i;
if(c!=0){
    printf("the number is not prime number");
    i=a+1;
}
else{
     printf("the number is  prime number");
    i=a+1;
}
}


}


