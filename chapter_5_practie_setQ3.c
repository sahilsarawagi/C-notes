# include<stdio.h>

float force(float mass);

int main(){
float m;
printf("what is the mass of the body\n");
scanf("%f",&m);
printf("the force is %.2f\n ",force(m) );



        return 0;
}
float force(float mass){
float result;
float g= 9.8 ;
result = mass*g;
return result ;
}