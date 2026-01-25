#include<stdio.h>
void main(){

    int amount,i,pin,balance,PIN_Real;
    balance=10000;
    PIN_Real=1234;
    while(1){
    printf("\nYou wanna withdraw press 1 OR wanna see balance press 2 :");
    scanf("%d",&i);
    printf("Enter your PIN here:");
    scanf("%d",&pin);
     if(pin==PIN_Real){

        if(i==1){
    printf("Enter the amount you wanna withdraw :");
    scanf("%d",&amount);

    if(amount<=balance){
            printf("successfully withdrawn money");
            balance=balance-amount;
        }
        else{
            printf("The transaction is declined (Insufficient balance)");
        }

    }
    else if(i==2){
        printf("your balance is %d",balance);
    }
    }
    else{
        printf("Access is denied(incorrect PIN)");
    }
    }
}
