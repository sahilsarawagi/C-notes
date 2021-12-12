#include <stdio.h>
#include <math.h>
int main()
{

    int a = 4;
    int b = 5;

    printf("the value of the a+b is %d\n", a + b);
    printf("the value of the a-b is %d\n", a - b);
    printf("the value of the a*b is %d\n", a * b);
    printf("the value of the a/b is %d\n", a / b);
    
    int z;
    z = b * a; // legal
    // b*a = z ;  illegal
    printf("the value of the z is %d\n", z);
    printf("5 when devided by 2 leves a remainder of %d\n", 5 % 2);
    printf("-5 when devided by 2 leves a remainder of %d\n", -5 % 2);
    printf("5 when devided by -2 leves a remainder of %d\n", 5 % -2);
    //no operator is assumed to be present
    //printf("the value of 4*5 is %d\n",(4)(5));  ---> will not return 20 wrong!!
    printf("the value of 4*5 is %d\n", (4) * (5));

    //there is no operator to perform exponentiation in C
    printf("the value of 4^5 is %d\n", 4 ^ 5);                  // ---> will not produce 4 to the power 5
    printf("the value of 4 to the power 5 is %f\n", pow(4, 5)); // --->  this will  produce 4 to the power 5
                                                                //       but to perform this we should have to include math.h because it is a function of math

    printf("the value of 6+5 is %d\n", 6 + 5);
    printf("the value of 6+5.6 is %f\n", 6 + 5.6);
    printf("the value of 6.1+5.6 is %f\n", 6.1 + 5.6);
    printf("the value of 5/2 is %d\n", 5 / 2);     // as both are integer so it will give the value of integer which is 2 for 2.5
    printf("the value of 2/5 is %d\n", 2 / 5);     // as both are integer so it will give the value of integer which is 0 for 0.4
    printf("the value of 5.0/2 is %f\n", 5.0 / 2); // as one is integer and another is float  so it will give the value of float which is  2.5
    printf("the value of 2.0/5 is %f\n", 2.0 / 5); // as one is integer and another is float  so it will give the value of float which is  0.4

    return 0;
}