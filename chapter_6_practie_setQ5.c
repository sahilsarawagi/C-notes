# include <stdio.h>
int main(){
int i = 4 , *j,**k ;
j = &i ;
k = &j;
printf("the value of %d\n",*j);
printf("the value of %d\n",*(&i));
printf("the value of %d\n",**k);             // <------this is answer 
printf("the value of %d\n",**(&j));

}