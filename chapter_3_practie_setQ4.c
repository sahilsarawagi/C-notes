#include<stdio.h>

int main(){
int year;
printf("check whether year has leaf year\n");
scanf("%d",&year);

if (year%4==0)
{
    printf("yes, this year is leap year");
}
else
{
    printf("no, this year isn't leap year");
}




    return 0 ;
}