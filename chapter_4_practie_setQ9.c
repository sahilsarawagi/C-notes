#include<stdio.h>

int main(){
int n, multiply=1,i=1;
printf("put the value to find factorial of number\n");
scanf("%d",&n);

while (i<=n)
{
    
    multiply*= i;
    i++;
    

}
printf("the factorial of %d is %d\n",n,multiply);



    return 0; 
    }