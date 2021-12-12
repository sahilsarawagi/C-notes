# include <stdio.h>
 
 
 
 int main(){

     float i = 5.5 ;
     float *ptr = &i ;
     printf("the value of ptr is %u\n",ptr);
     ptr++ ;
     printf("the value of ptr is %u\n",ptr);
     ptr++ ;
     printf("the value of ptr is %u\n",ptr);
     ptr-- ;
     printf("the value of ptr is %u\n",ptr);
   ptr =  ptr - 1;
     printf("the value of ptr is %u\n",ptr);
   ptr =  ptr - 2;
     printf("the value of ptr is %u\n",ptr);



    return 0 ;
}