# include <stdio.h>

float average(float a, float b);

int main(){
float a , b ;
printf("Enter the value of a\n");
scanf("%f",&a);
printf("Enter the value of b\n");
scanf("%f",&b);

printf("average of the number is %f\n",average(a,b));
    return 0;
}
float average(float a, float b){
float result;
float sum ;
sum= a+b ;
 result = sum/2 ; 

return result ;
}