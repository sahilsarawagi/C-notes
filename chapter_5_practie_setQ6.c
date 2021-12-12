# include<stdio.h>
//formula for n natural number is n(n+1)/2

int sum(int n);

int main(){int n;
printf("put the value to find the sum of natural number\n");
scanf("%d",&n);
printf("the sum is %d\n",sum(n));
    return 0 ;
}

int sum(int n){
int result ;
result =(n)*(n+1)/2 ;
return result;

}