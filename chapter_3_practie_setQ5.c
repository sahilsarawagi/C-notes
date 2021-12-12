#include <stdio.h>
int main(){

//97-122  is a-z ASCII Value
char ch;
printf("enter the number \n");
scanf("%c",&ch);
if (ch<=122&& ch>=97)
{
    printf("it is lowercase\n");
}
else
{
    printf("it is not lower case\n");
}




    return 0;
}