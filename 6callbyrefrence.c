#include <stdio.h>
void wrongswap(int a,int b);
void swap(int *a,int *b);
int main(){
int x=4, y=5 ;
printf("the value of x and y before swap is %d and %d\n",x,y);
wrongswap(x,y) ;  //will not work due to call by value
printf("the value of x and y after swap is %d and %d\n",x,y);

printf("the value of x and y before swap is %d and %d\n",x,y);
swap(&x,&y) ;  //will work due to call by adresss
printf("the value of x and y after swap is %d and %d\n",x,y);




    return 0 ;
}
void swap(int *a,int *b){
    int temp;
    temp = *a ;
    *a=*b;
    *b=temp ;           // swap is  working bcos we are calling by refrence or adress
  

}
void wrongswap(int a,int b){
    int temp;
    temp = a ;
    a=b;
    b=temp ;           //wrong swap is not working bcos we are calling by value 


}