#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number\n");
    scanf("%d", &a);
    // one liner (if you don't want to use if or else)
    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");

    return 0;
}