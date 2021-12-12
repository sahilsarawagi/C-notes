# include <stdio.h>
int sum(int a , int b) ;
int main(){
     int a=4 , b=7 ;

printf("the sum of 4 and 7 is %d\n",sum(a,b));
printf("the value of a and b is %d and %d\n",a,b);
printf("the value of a and b after function call is %d and %d\n",a,b);



    return 0 ;
}
int sum(int a , int b){
int result ;
result = a + b ;
return result ;
}
//7 :20 