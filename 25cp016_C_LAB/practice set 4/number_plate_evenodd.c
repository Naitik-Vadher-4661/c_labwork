#include<stdio.h>
void main(){

    int num_plate;
    printf("Enter number plate here:");
    scanf("%d",&num_plate);
    if(num_plate%2==0){
        printf("the number plate is even\n");
        printf("you are allowed to enter in even days\n");
    }
    else{
        printf("the number plate is odd\n");
        printf("you are allowed to enter in odd days\n");
    }
}
