#include <stdio.h>

int main()
{
    int age;
    printf(" fill your age to check whether you are allowed to swim or not\n");
    scanf("%d", &age);
    if (age >= 15)
    {
        printf("you are eligible to swim\n");
    }
    else
    {
        printf("you are below the age of 15, you are not allowed to swim\n");
    }
    if (age == 50)
    {
        printf("half centuary completed\n");
    }

    return 0;
}