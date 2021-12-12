#include <stdio.h>

int main()
{

    int principle = 100, rate = 4, year = 2;
    int simpleinterest = (principle * rate * year) / 100;
    printf("the value of the simple interest is %d\n", simpleinterest);

    return 0;
}