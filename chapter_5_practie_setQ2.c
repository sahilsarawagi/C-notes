# include <stdio.h>
float coverter(float celsius);

float main(){
float c;
printf("put the value of celsius\n");
scanf("%f",&c);
printf("the value of %f celsius in ferhenhite is %f\n",c, coverter(c) ) ;


    return 0 ;
}
float coverter(float celsius){
   float result;
   result  = (celsius*9/5) + 32 ; 
   return result ;
}