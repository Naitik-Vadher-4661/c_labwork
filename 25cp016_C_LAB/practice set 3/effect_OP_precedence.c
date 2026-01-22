#include<stdio.h>
void main()
{
    int x=2,y=4,z=9,ans1,a=1,b=4,c=7,d=3,e=5,f=2,g=4,h=5,j=4,i=3,k=4,ans2,ans3,ans4;
    printf("here value of x=2;y=4;z=9;a=1;b=4;c=7;j=4;k=4;d=3;e=5;f=2;g=4;h=5;i=3;\n");
    ans1=x+y*z;                        //here multiplication occurs first and then it adds
    printf("the anser of x+y*z is %d\n",ans1);
 
   
    ans2=(a+b)*c;           //here becuase of bracket the addistion occurs first
    printf("the answer of (a+b)*c is %d\n",ans2);

   
   
    ans3=d+e%f;             //here first modulo occurs and then addition
    printf("answer of d+e%%f is %d\n",ans3);

  
    
    ans4=g*h/i;       //here both / and * has same OP precedency so first left will occur which is "*"
    printf("the value of g*h/i is %d\n",ans4);
                           
    if(j==k || i>k){
        printf("i>k is true OR j=k is true\n");
    }
    else{
        printf("both j=k and i>k expressions are false\n");
    }
}