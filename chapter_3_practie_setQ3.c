# include<stdio.h>
int main(){
float tax=0, income ;

printf("what is your income\n");
scanf("%f",&income);

if (income<500000 && income>250000){
tax = tax + 0.05 * (income-250000) ;

}
if (income>500000 && income<1000000){
tax = tax + 0.20 * (income-500000) ;

}
if (income>1000000){
tax = tax + 0.30 * (income-1000000) ;

}
printf("you will have to pay this amount of tax %f by the end of this month", tax);



    return 0;
}