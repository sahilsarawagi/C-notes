#include <stdio.h>

int main(){
// int a ; b=a ;  // not valid
//int v = 3^3   // answer is valid (question was not it will give 9 or not but the question is it wil valid or not) 
//char dt = '21 dec'; // it will not valid becos it will take only one character
//q3 --> write a program to determine if it divisible by 97 or not 
int num;
printf("Enter the number \n");
scanf("%d",&num);
printf("dibisiblity test return %d\n",num%97);

//Q4 explain step by step evaluation of 3*x/y-z + k  where x=2 y=3 z=3 k=1
  //ans  
int x=2 ,y=3, z=3 ,k=1;
printf("Q4's ANS is %d\n",3*x/y-z + k);

// step by step evalution
//3*2/y-z +k --->  6/y-z +k ----> 6/3-z +k ----> 2-z+k ---> 2-3 + k ----> -1 +1 =0



    return 0;

}