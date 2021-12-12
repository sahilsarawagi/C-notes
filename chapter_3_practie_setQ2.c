#include <stdio.h>
int main(){
int mathematics;
int chemistry ;
int physics ;
float total;
printf("Marks in mathematics?\n");
scanf("%d",&mathematics);
printf("Marks in chemistry?\n");
scanf("%d",&chemistry);
printf("Marks in physics?\n");
scanf("%d",&physics);

total = (physics + chemistry +mathematics)/3 ;

if (total>=40 && mathematics>33 && physics>33 && chemistry>33)
{
    printf("your total persentage is %f \n", total);
    printf("you are pass");
}
else
{
    printf("your total persentage is %f\n", total);
    printf(" Good luck ,Try again next year") ;
}




    return 0;
}