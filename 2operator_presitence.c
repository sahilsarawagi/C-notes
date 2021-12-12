#include <stdio.h>

int main(){

  int x = 2;
  int y= 3 ;
  printf("the value of the 3*x - 8*y is %d\n", 3*x - 8*y);
  printf("the value of the   8*y / 3*x is %d\n",   8*y / 3*x);  //8*3/3*2 = 24/6 will give wrong answer
// because * and / has same priority so we will solve the problem of assosiative so * / follow left to right assosiative means it wil first solve the left expression and then goes toward right to solve 
// so it solve the above problem like 8*3/3*x = 24/3*2 --> 8*2 -->16



    return 0;
}