# include <stdio.h>
 
 
 
 int main(){

     char i = 5 ;
     char *ptr = &i ;
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

