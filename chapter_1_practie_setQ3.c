#include <stdio.h>

int main()
{

    float celcius;
    printf("put the value of temperature in celcius %f\n");
    scanf("%f", &celcius);
    float conversion = (celcius * 9 / 5) + 32;
    printf("Temperature in feranhite is %f", conversion);

    return 0;
}