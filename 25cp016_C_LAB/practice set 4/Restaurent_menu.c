#include<stdio.h>
void main(){
    int code,count;
    printf("MENU\n\n");
    printf("Food \t\t code \t price\n");
    printf("Gujarati Thali \t 1 \t 100rupee/-\n");
    printf("Punjabi Thali \t 2 \t 120rupee/-\n");

    for(int i=1;i!=0;i){

        printf("Enter your order's code:");
        scanf("%d",&code);

        printf("Enter Zero to exit and non zero to order more:");
        scanf("%d",&i);
        count++;
    }
    printf("you ordered %d things",count);
}
