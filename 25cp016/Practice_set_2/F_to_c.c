#include<stdio.h>
void main(){
    int a;
    printf("if you want to convert centigrade to fahrenheit press non-zero OR\n ");
printf("If you want to convert fahrenheit to centigrade press zero:");
scanf("%d",&a);
if(a!=0){
        float centi;
    printf("put centigrade value here:");
    scanf("%f",&centi);
    printf("the fahrenheit value of %.2f is %.2f",centi,(9/5*(centi))+32);

}
else{
    float fah;
     printf("put fahrenheit value here:");
    scanf("%f",&fah);
    printf("the centigrade value of %.2f is %.2f",fah,(fah-32)*5/9);
}
}
