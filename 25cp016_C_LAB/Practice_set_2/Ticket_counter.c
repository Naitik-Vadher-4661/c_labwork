#include<stdio.h>
void main(){
int ticket_count=1;
int a,n;
n=0;

for(int i=1;i>n;i++){
        printf("\nif you want a ticket press non zero   ");
printf("OR    if you want to return a ticket press zero:");
scanf("%d",&a);
if(a!=0){
    ticket_count++;
    printf("the ticket count is %d",ticket_count);
}
else{
    ticket_count--;
    printf("the ticket count is %d",ticket_count);
}
}
}
