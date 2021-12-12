# include <stdio.h>
int main(){
int i = 414 , *j ;
j = &i ;
printf("the adress of the variable i is %u\n",&i);
printf("the adress of the variable i is %u\n",j);
printf("the  value of the variable i is %d\n",*j);
printf("the value  of the variable i is %d\n",*(&i));




    return 0 ;
}