#include<stdio.h>
void main(){
    int marks;
    printf("Enter your marks here");
    scanf("%d",&marks);
    marks=marks/10;
    if(marks>=9){
        printf("Your grade is A");
    }
    else if(marks>=8){
        printf("Your grade is B");
    }
    else if(marks>=7){
        printf("Your grade is c");
    }
    else if(marks>=6){
        printf("Your grade is D");
    }
    else{
        printf("you are FAILED ");
    }
}
