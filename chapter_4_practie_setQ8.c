#include<stdio.h>
int main(){
int n,i,multiply=1 ;
printf("put the number to know the factorial of that number\n");
scanf("%d",&n);

for ( i=1 ; i <= n; i++)
{
    multiply*=i;
   
}

 printf("factorial of %d is %d \n",n,multiply);


    return 0 ;
}