// fibbonachi sequence 0,1,1,2,3,5,8,13,21
// fib(n) =fib(n-1) + fib(n-2)


# include <stdio.h>

int fibbonacci (int n );


int main(){
    int n ;
    printf("find the nth term of fobbonchi\n");
     scanf("%d",&n);
printf("the value of %dth term is %d\n",n,fibbonacci(n-1) + fibbonacci(n-2) );

}

int fibbonacci (int n){
    
if (n==1)
{
    return 0 ;
}
else if (n==2)
{
    return 1 ;
}
else
{
    return fibbonacci(n-1) + fibbonacci(n-2) ;
}



}