#include <stdio.h>

int main()
{

    int age;
    int vipPass = 0;
    vipPass = 1;
    printf("Enter your age\n");
    scanf("%d", &age);
    if ((age <= 90 && age > 18) || vipPass == 1)
    {
        printf("you are below 90 and above 18, you  are allowed to drive \n");
    }
    else
    {
        printf("you arenot  allowed to drive\n");
    }

    return 0;
}