#include <stdio.h>
int main()
{
    int radius, height;
    printf("what is the radius of the circle %d\n");
    scanf("%d", &radius);
    float area = 3.14 * radius * radius;
    printf("the area of the cirle is %f\n", area);
    printf("what is the height of cylinder%d\n");
    scanf("%d", &height);
    printf("the volume of the cylinder is %f\n", area * height);

    return 0;
}